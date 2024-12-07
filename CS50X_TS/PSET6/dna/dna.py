import csv
import sys


def main():

    # Check for correct command-line arguments
    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    # Read database file into a list of dictionaries
    dna_database = []
    with open(sys.argv[1], 'r') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            dna_database.append(row)

    # Read DNA sequence file into a string
    with open(sys.argv[2], 'r') as sequencefile:
        dna_sequence = sequencefile.read()

    # Get list of STRs (Short Tandem Repeats) from the database header
    str_sequences = list(dna_database[0].keys())[1:]

    # Find longest match of each STR in DNA sequence
    str_counts = {}
    for str_sequence in str_sequences:
        str_counts[str_sequence] = longest_match(dna_sequence, str_sequence)

    # Check database for matching profiles
    for individual in dna_database:
        match_count = 0
        for str_sequence in str_sequences:
            if int(individual[str_sequence]) == str_counts[str_sequence]:
                match_count += 1

        # If all STR counts match, print the person's name
        if match_count == len(str_sequences):
            print(individual["name"])
            return

    # If no match found, print "No match"
    print("No match")


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in the sequence."""

    longest_run = 0
    subsequence_len = len(subsequence)
    sequence_len = len(sequence)

    # Iterate over the sequence to find consecutive runs of the subsequence
    for i in range(sequence_len):
        count = 0

        # Check for consecutive matches of the subsequence
        while True:
            start = i + count * subsequence_len
            end = start + subsequence_len

            # If the current substring matches the subsequence
            if sequence[start:end] == subsequence:
                count += 1
            else:
                break

        # Update the longest run found so far
        longest_run = max(longest_run, count)

    return longest_run


if __name__ == "__main__":
    main()
