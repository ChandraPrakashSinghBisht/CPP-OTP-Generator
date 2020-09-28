# CPP-OTP-Generator

Algorithm
Randomly pick characters from our all possibilities and generate a string of the desired length from it. OTPs are generally 6-7 characters long and randomness in 6-7 characters almost guarantees a secure way of logging in.

Applications

    OTPs are widely used in websites like- Facebook, Google Sign-in, Wifi – accessing, Railways Portal Login etc.
Probability of collision of two OTPs


    The length of OTP is 6 and the set size of all possible characters in the OTP is 62. So the total number of possible sets of the pair of OTPs are 62^12.
    Some of them are – [{aaaaaa, aaaaaa}, {aaaaaa, aaaaab},…..{456789, 456788}, {456789, 456789}]
    But the possible sets of equal pair of OTPs are:62^6. Some of them are – [{aaaaaa, aaaaaa}, {aaaaab, aaaaab},…..{456788, 456788}, {456789, 456789}]
    Hence the probability of collision of two OTPs is:
    62^6 / 62^12 = 1 / 62^6 = 1 / 56800235584 = 1.7605561^-11

Time Complexity: O(N), where N = number of characters in our OTP
