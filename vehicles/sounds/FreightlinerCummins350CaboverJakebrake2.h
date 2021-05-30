const unsigned int jakeBrakeSampleRate = 22050;
const unsigned int jakeBrakeSampleCount = 4539;
const signed char jakeBrakeSamples[] = {//0
0, 0, 2, 4, 8, 13, 24, 28, 30, 32, 35, 37, 35, 34, 34, 34, //16
35, 33, 30, 28, 26, 25, 24, 21, 20, 18, 14, 11, 12, 9, 5, 3, //32
2, 0, -6, -8, -10, -13, -16, -18, -21, -24, -27, -29, -30, -30, -32, -33, //48
-33, -33, -33, -34, -34, -33, -31, -29, -26, -21, -18, -16, -13, -11, -10, -7, //64
-4, -3, -4, -4, 0, 2, 4, 5, 5, 7, 13, 14, 14, 13, 15, 17, //80
20, 19, 17, 17, 17, 18, 17, 17, 19, 21, 25, 31, 34, 35, 38, 41, //96
45, 51, 53, 53, 54, 56, 59, 61, 62, 62, 63, 62, 60, 58, 55, 50, //112
45, 40, 33, 28, 23, 17, 12, 6, 3, 1, 0, -3, -7, -10, -12, -12, //128
-12, -13, -16, -17, -17, -18, -19, -18, -16, -15, -13, -10, -9, -7, -3, -2, //144
-1, 0, 2, 6, 8, 10, 11, 14, 19, 26, 30, 33, 34, 37, 42, 47, //160
49, 49, 48, 48, 51, 51, 51, 50, 48, 46, 45, 42, 40, 38, 37, 33, //176
27, 25, 23, 22, 21, 20, 19, 20, 21, 20, 19, 18, 19, 21, 23, 24, //192
25, 28, 29, 30, 31, 33, 37, 38, 40, 40, 41, 43, 45, 44, 43, 42, //208
41, 38, 34, 28, 21, 16, 10, 0, -5, -12, -20, -27, -31, -38, -45, -50, //224
-54, -59, -63, -67, -70, -72, -70, -68, -66, -63, -59, -53, -48, -44, -38, -34, //240
-31, -26, -20, -15, -6, 2, 8, 13, 18, 24, 27, 33, 40, 45, 47, 50, //256
51, 52, 55, 59, 62, 63, 62, 63, 63, 63, 62, 59, 55, 51, 46, 42, //272
36, 32, 27, 19, 11, 5, 1, -2, -7, -11, -14, -16, -16, -17, -19, -21, //288
-22, -20, -18, -16, -17, -17, -14, -10, -7, -5, -2, -2, -1, -1, -2, -3, //304
-4, -5, -8, -9, -9, -9, -9, -11, -13, -15, -19, -21, -22, -23, -26, -30, //320
-32, -33, -34, -36, -36, -37, -39, -39, -39, -38, -36, -36, -39, -40, -41, -40, //336
-40, -41, -43, -44, -46, -47, -50, -53, -55, -58, -58, -57, -58, -59, -61, -64, //352
-65, -64, -62, -60, -59, -58, -57, -56, -53, -50, -46, -44, -43, -43, -44, -43, //368
-41, -41, -41, -39, -37, -36, -35, -34, -34, -33, -32, -30, -30, -31, -33, -33, //384
-34, -35, -32, -29, -27, -26, -23, -19, -16, -14, -10, -8, -8, -6, -3, -3, //400
-5, -7, -7, -7, -8, -9, -11, -15, -20, -20, -21, -24, -27, -29, -30, -32, //416
-33, -34, -36, -41, -42, -42, -43, -46, -49, -50, -51, -53, -54, -56, -61, -63, //432
-62, -63, -66, -68, -70, -73, -74, -74, -73, -71, -69, -66, -65, -63, -59, -53, //448
-52, -52, -51, -49, -47, -39, -33, -30, -26, -22, -16, -11, -7, -4, -2, 0, //464
6, 11, 14, 14, 15, 18, 22, 24, 28, 31, 32, 29, 30, 31, 30, 31, //480
35, 33, 32, 33, 32, 31, 33, 38, 37, 36, 38, 40, 38, 37, 38, 41, //496
42, 40, 40, 41, 41, 40, 40, 39, 36, 35, 34, 29, 27, 27, 25, 22, //512
20, 20, 21, 23, 25, 24, 22, 21, 23, 24, 25, 27, 30, 33, 34, 33, //528
34, 37, 39, 38, 37, 37, 37, 39, 42, 43, 44, 44, 46, 46, 47, 48, //544
47, 46, 46, 48, 49, 45, 44, 48, 51, 55, 58, 61, 60, 59, 60, 60, //560
57, 57, 56, 54, 51, 50, 46, 41, 38, 36, 34, 33, 30, 28, 26, 25, //576
22, 19, 17, 16, 15, 15, 15, 14, 14, 13, 11, 9, 6, 4, 2, 0, //592
-1, -4, -11, -14, -15, -18, -20, -22, -27, -31, -34, -36, -36, -41, -44, -47, //608
-49, -49, -48, -47, -47, -45, -43, -41, -38, -33, -30, -28, -25, -20, -13, -10, //624
-7, -3, 1, 7, 12, 14, 16, 20, 24, 26, 31, 32, 31, 31, 33, 34, //640
33, 32, 31, 29, 26, 26, 26, 26, 25, 24, 24, 24, 23, 21, 20, 19, //656
16, 13, 10, 7, 7, 7, 5, 3, 2, 1, 1, 1, -1, -3, -3, -3, //672
-5, -10, -11, -11, -12, -13, -11, -8, -8, -7, -7, -7, -9, -8, -7, -8, //688
-9, -9, -8, -10, -11, -11, -13, -16, -20, -21, -25, -29, -31, -33, -38, -38, //704
-37, -38, -40, -40, -39, -38, -36, -34, -32, -30, -26, -25, -25, -24, -23, -23, //720
-22, -20, -19, -18, -16, -14, -15, -16, -15, -13, -12, -11, -12, -13, -15, -15, //736
-14, -14, -15, -16, -18, -17, -17, -18, -17, -17, -18, -18, -18, -19, -20, -20, //752
-21, -19, -18, -18, -21, -22, -19, -17, -16, -14, -14, -15, -11, -10, -9, -8, //768
-6, -3, -4, -3, 0, 3, 3, 5, 7, 8, 11, 15, 17, 17, 18, 21, //784
23, 23, 24, 25, 23, 21, 22, 25, 25, 23, 21, 19, 16, 14, 13, 10, //800
7, 6, 3, -1, -1, -2, -7, -11, -13, -14, -15, -15, -16, -19, -24, -28, //816
-29, -30, -30, -32, -34, -34, -33, -33, -33, -32, -32, -32, -32, -33, -33, -33, //832
-33, -31, -28, -25, -21, -16, -13, -10, -8, -4, -1, 3, 6, 7, 9, 14, //848
18, 22, 22, 23, 25, 28, 32, 33, 34, 35, 37, 37, 38, 38, 38, 37, //864
37, 38, 40, 40, 37, 36, 37, 37, 36, 36, 36, 37, 36, 32, 32, 32, //880
32, 31, 32, 32, 31, 31, 31, 32, 34, 34, 34, 36, 38, 38, 35, 34, //896
34, 34, 35, 34, 32, 29, 27, 26, 26, 27, 26, 26, 26, 25, 22, 22, //912
20, 18, 17, 17, 16, 13, 12, 10, 7, 7, 7, 6, 6, 5, 4, 2, //928
2, 3, 3, 3, 4, 4, 4, 5, 6, 6, 6, 5, 5, 5, 5, 5, //944
7, 5, 2, 0, 0, 2, 1, 0, 0, 0, 0, -1, -2, -3, -5, -6, //960
-8, -8, -9, -10, -11, -13, -15, -18, -19, -18, -19, -22, -25, -29, -31, -32, //976
-32, -35, -37, -37, -36, -36, -38, -39, -39, -39, -39, -37, -34, -33, -32, -33, //992
-33, -32, -30, -27, -26, -24, -21, -18, -16, -15, -12, -9, -8, -5, -2, 1, //1008
4, 8, 9, 12, 15, 17, 20, 24, 27, 28, 27, 28, 28, 30, 34, 36, //1024
34, 32, 32, 33, 35, 35, 33, 31, 30, 30, 31, 29, 24, 20, 18, 17, //1040
16, 11, 8, 7, 6, 5, 2, 1, 1, 0, -1, -3, -5, -6, -8, -9, //1056
-9, -11, -14, -14, -15, -18, -20, -19, -19, -20, -22, -22, -22, -25, -25, -24, //1072
-24, -24, -26, -25, -25, -26, -26, -26, -28, -28, -26, -25, -25, -24, -24, -25, //1088
-24, -22, -22, -22, -19, -18, -19, -19, -18, -17, -17, -18, -19, -17, -15, -17, //1104
-18, -17, -15, -14, -14, -14, -13, -11, -9, -9, -6, -5, -5, -4, -4, -4, //1120
-1, 1, 2, 1, 1, 3, 4, 3, 3, 4, 5, 6, 6, 5, 5, 8, //1136
11, 16, 17, 18, 19, 21, 23, 27, 27, 27, 30, 33, 37, 38, 38, 37, //1152
37, 40, 43, 43, 46, 48, 49, 51, 53, 54, 53, 54, 56, 56, 55, 53, //1168
52, 52, 53, 53, 53, 51, 49, 46, 45, 43, 41, 39, 38, 37, 35, 33, //1184
32, 30, 28, 27, 24, 23, 22, 21, 20, 15, 12, 13, 13, 12, 10, 8, //1200
7, 7, 8, 8, 7, 7, 9, 10, 10, 11, 12, 12, 11, 11, 13, 13, //1216
15, 14, 14, 16, 18, 18, 19, 19, 19, 19, 22, 25, 26, 27, 26, 25, //1232
27, 29, 30, 31, 31, 30, 28, 30, 30, 29, 28, 28, 27, 27, 26, 24, //1248
22, 21, 23, 22, 20, 18, 17, 14, 9, 7, 5, 4, 2, -1, -4, -4, //1264
-4, -6, -8, -8, -9, -13, -16, -16, -18, -23, -25, -30, -33, -32, -30, -31, //1280
-32, -32, -32, -31, -28, -26, -26, -27, -26, -24, -26, -28, -30, -31, -31, -34, //1296
-35, -35, -37, -39, -38, -38, -39, -40, -40, -40, -41, -43, -45, -45, -44, -43, //1312
-46, -48, -50, -50, -49, -48, -48, -48, -49, -50, -49, -49, -49, -49, -50, -51, //1328
-51, -51, -49, -48, -48, -49, -48, -47, -47, -47, -49, -50, -51, -51, -51, -52, //1344
-54, -53, -52, -51, -53, -56, -58, -59, -60, -60, -61, -62, -63, -62, -62, -61, //1360
-62, -61, -62, -64, -63, -62, -62, -60, -59, -59, -61, -59, -57, -57, -58, -57, //1376
-54, -52, -50, -47, -43, -41, -39, -37, -33, -30, -27, -26, -26, -25, -22, -16, //1392
-14, -13, -12, -10, -7, -2, -1, -2, -1, 2, 4, 5, 5, 5, 5, 5, //1408
6, 7, 8, 9, 9, 8, 6, 6, 5, 4, 3, 2, 0, -3, -4, -4, //1424
-3, -3, -3, -4, -5, -5, -5, -6, -6, -7, -8, -9, -9, -7, -9, -10, //1440
-10, -9, -10, -13, -14, -14, -13, -13, -16, -17, -17, -18, -21, -22, -22, -23, //1456
-26, -27, -26, -27, -28, -29, -29, -27, -26, -29, -31, -30, -29, -29, -27, -25, //1472
-23, -21, -19, -16, -13, -12, -10, -8, -7, -5, -3, -1, 0, 1, 3, 6, //1488
8, 10, 10, 10, 13, 15, 17, 19, 21, 23, 25, 29, 31, 33, 33, 35, //1504
40, 43, 44, 44, 45, 46, 47, 49, 51, 52, 52, 54, 55, 56, 57, 57, //1520
56, 58, 58, 59, 59, 60, 61, 61, 61, 61, 62, 64, 66, 68, 69, 69, //1536
67, 67, 69, 70, 71, 71, 72, 73, 71, 71, 71, 71, 72, 72, 72, 71, //1552
69, 67, 64, 60, 58, 56, 52, 48, 44, 39, 35, 31, 29, 28, 27, 24, //1568
22, 20, 17, 16, 12, 8, 5, 4, 2, -1, -4, -6, -8, -11, -11, -11, //1584
-11, -12, -15, -18, -17, -17, -17, -17, -18, -18, -18, -16, -15, -16, -17, -17, //1600
-16, -15, -15, -16, -16, -16, -15, -13, -11, -10, -10, -11, -9, -7, -7, -7, //1616
-7, -7, -6, -6, -5, -5, -5, -2, -1, 1, 3, 4, 6, 8, 9, 10, //1632
10, 10, 12, 13, 14, 13, 13, 15, 18, 18, 19, 20, 20, 21, 24, 23, //1648
21, 21, 21, 19, 17, 16, 14, 11, 10, 9, 7, 5, 4, 3, 3, 3, //1664
1, -2, -5, -5, -6, -9, -11, -14, -16, -17, -19, -22, -24, -26, -28, -29, //1680
-32, -37, -41, -44, -47, -49, -49, -50, -53, -55, -56, -57, -59, -59, -60, -60, //1696
-59, -59, -60, -59, -57, -55, -54, -54, -53, -50, -48, -47, -44, -42, -41, -39, //1712
-35, -32, -31, -28, -25, -23, -20, -14, -13, -13, -11, -8, -7, -5, -3, -2, //1728
-2, -2, -4, -7, -8, -8, -8, -8, -10, -10, -9, -9, -10, -12, -14, -13, //1744
-13, -12, -12, -13, -15, -14, -12, -10, -8, -7, -6, -5, -3, -1, 1, 3, //1760
3, 3, 4, 4, 4, 7, 7, 6, 6, 7, 10, 10, 11, 12, 12, 11, //1776
13, 13, 13, 12, 11, 11, 12, 13, 13, 12, 10, 10, 9, 8, 7, 4, //1792
4, 3, 2, 1, -2, -2, -1, 0, -1, -2, -2, -1, 0, 1, 1, 0, //1808
-1, 0, 0, 0, 0, 1, 3, 3, 4, 5, 4, 3, 3, 2, 0, -2, //1824
-3, -4, -6, -9, -11, -13, -14, -14, -16, -17, -18, -20, -20, -19, -20, -21, //1840
-21, -20, -19, -18, -16, -16, -15, -12, -9, -4, -3, -1, 1, 3, 5, 5, //1856
6, 7, 10, 12, 13, 13, 14, 16, 18, 20, 20, 21, 22, 22, 21, 21, //1872
21, 20, 19, 19, 19, 19, 20, 21, 22, 21, 18, 16, 16, 16, 14, 14, //1888
13, 9, 9, 10, 9, 7, 5, 4, 4, 5, 6, 5, 3, 3, 3, 4, //1904
4, 2, 0, 1, 1, 0, 0, 2, 5, 7, 9, 12, 16, 24, 27, 31, //1920
35, 40, 44, 51, 54, 58, 61, 65, 69, 72, 74, 74, 73, 74, 73, 72, //1936
70, 67, 64, 62, 58, 52, 47, 42, 38, 31, 26, 21, 15, 9, 5, -2, //1952
-7, -11, -14, -16, -17, -20, -21, -22, -22, -22, -22, -23, -22, -21, -20, -20, //1968
-19, -19, -18, -16, -13, -11, -11, -12, -11, -8, -6, -10, -12, -14, -15, -17, //1984
-19, -23, -26, -30, -34, -38, -41, -46, -50, -56, -59, -62, -67, -69, -71, -73, //2000
-74, -75, -77, -77, -76, -78, -79, -78, -76, -74, -73, -71, -69, -64, -59, -55, //2016
-52, -50, -46, -39, -34, -28, -23, -20, -17, -9, -2, 4, 9, 14, 20, 24, //2032
30, 34, 36, 38, 43, 45, 49, 52, 53, 54, 54, 55, 56, 57, 58, 60, //2048
61, 63, 65, 67, 70, 72, 71, 73, 75, 77, 79, 81, 83, 84, 86, 88, //2064
90, 93, 94, 94, 95, 97, 100, 102, 104, 105, 106, 106, 104, 103, 101, 98, //2080
93, 85, 80, 74, 68, 62, 54, 39, 31, 24, 16, 7, -7, -17, -27, -36, //2096
-43, -48, -56, -62, -67, -71, -72, -72, -73, -72, -71, -69, -65, -58, -53, -48, //2112
-42, -35, -26, -17, -11, -3, 6, 12, 19, 31, 39, 47, 52, 57, 63, 67, //2128
71, 74, 77, 77, 78, 81, 85, 86, 86, 85, 84, 85, 85, 82, 78, 71, //2144
67, 62, 59, 55, 51, 40, 34, 31, 26, 22, 18, 10, 6, 2, 1, 0, //2160
1, 1, 2, 3, 5, 8, 13, 16, 18, 21, 24, 27, 34, 37, 38, 38, //2176
41, 46, 46, 44, 43, 41, 40, 35, 30, 25, 20, 14, 7, -5, -13, -22, //2192
-29, -35, -45, -54, -62, -69, -74, -79, -88, -94, -100, -104, -107, -111, -115, -118, //2208
-119, -120, -121, -122, -123, -124, -124, -123, -124, -127, -126, -125, -125, -125, -123, -120, //2224
-118, -113, -109, -105, -100, -95, -89, -83, -78, -72, -65, -61, -58, -53, -49, -47, //2240
-45, -43, -41, -40, -39, -39, -38, -35, -34, -35, -36, -37, -37, -39, -40, -39, //2256
-38, -38, -37, -36, -35, -33, -28, -26, -24, -21, -16, -10, -2, -1, -1, 0, //2272
2, 6, 10, 17, 24, 28, 30, 34, 36, 36, 35, 34, 33, 35, 34, 33, //2288
31, 28, 26, 24, 22, 21, 20, 18, 12, 11, 12, 9, 6, 4, 1, -2, //2304
-5, -7, -10, -15, -18, -19, -21, -25, -27, -30, -31, -32, -32, -32, -33, -33, //2320
-34, -34, -34, -33, -30, -27, -24, -21, -18, -15, -12, -10, -8, -7, -4, -3, //2336
-4, -2, 0, 2, 4, 5, 6, 9, 12, 14, 13, 14, 16, 18, 20, 19, //2352
17, 17, 17, 17, 17, 17, 19, 23, 27, 31, 33, 35, 39, 43, 48, 51, //2368
52, 54, 54, 56, 59, 61, 62, 63, 63, 61, 59, 57, 55, 47, 42, 38, //2384
33, 28, 20, 14, 10, 6, 3, 2, -2, -5, -8, -11, -12, -12, -12, -14, //2400
-18, -17, -17, -19, -19, -17, -16, -15, -13, -9, -8, -6, -3, -2, -1, 1, //2416
4, 5, 8, 10, 13, 17, 21, 26, 30, 34, 36, 39, 44, 48, 49, 49, //2432
48, 48, 50, 51, 51, 50, 48, 46, 44, 42, 40, 38, 35, 31, 27, 24, //2448
23, 21, 20, 19, 19, 19, 21, 20, 18, 18, 19, 21, 25, 25, 26, 28, //2464
29, 30, 33, 35, 37, 38, 39, 41, 42, 44, 45, 44, 43, 42, 40, 37, //2480
34, 29, 22, 12, 7, 1, -6, -12, -24, -29, -33, -38, -44, -50, -56, -61, //2496
-65, -68, -70, -71, -70, -68, -66, -63, -59, -51, -46, -42, -38, -34, -31, -23, //2512
-18, -12, -6, 2, 11, 15, 20, 23, 27, 33, 43, 46, 48, 49, 51, 53, //2528
57, 61, 63, 62, 63, 62, 63, 63, 61, 59, 55, 49, 44, 40, 36, 31, //2544
27, 16, 8, 4, 2, -2, -9, -13, -15, -16, -16, -17, -21, -22, -21, -20, //2560
-19, -16, -17, -16, -14, -10, -7, -3, -2, -2, -1, -1, -1, -4, -5, -6, //2576
-9, -9, -9, -9, -10, -11, -12, -15, -21, -22, -22, -22, -26, -30, -33, -34, //2592
-34, -35, -36, -38, -39, -39, -38, -37, -36, -37, -39, -41, -41, -40, -40, -42, //2608
-43, -45, -46, -48, -50, -53, -56, -58, -57, -56, -59, -60, -61, -64, -66, -65, //2624
-61, -60, -59, -58, -57, -56, -51, -48, -46, -44, -43, -44, -44, -42, -41, -41, //2640
-40, -38, -37, -36, -35, -34, -34, -33, -31, -30, -30, -31, -33, -34, -35, -34, //2656
-33, -30, -27, -24, -21, -19, -17, -12, -9, -8, -8, -7, -4, -4, -6, -7, //2672
-7, -7, -7, -10, -13, -17, -20, -20, -23, -26, -27, -29, -30, -32, -34, -35, //2688
-38, -40, -42, -42, -44, -48, -50, -49, -51, -54, -54, -58, -62, -63, -62, -64, //2704
-67, -68, -70, -74, -75, -73, -72, -71, -68, -66, -63, -61, -56, -52, -51, -52, //2720
-51, -48, -44, -38, -33, -30, -25, -21, -15, -11, -8, -3, -1, 1, 5, 10, //2736
14, 14, 16, 19, 22, 25, 28, 32, 30, 29, 30, 30, 31, 34, 35, 33, //2752
32, 32, 32, 32, 35, 38, 37, 36, 39, 40, 38, 37, 37, 42, 41, 40, //2768
40, 41, 40, 40, 40, 38, 36, 34, 33, 28, 27, 27, 25, 22, 21, 21, //2784
21, 23, 25, 24, 21, 22, 23, 25, 25, 28, 31, 34, 33, 32, 34, 38, //2800
39, 38, 37, 37, 37, 40, 43, 43, 44, 44, 46, 46, 48, 48, 46, 45, //2816
48, 49, 47, 45, 45, 47, 53, 57, 60, 61, 60, 59, 60, 59, 57, 57, //2832
56, 53, 51, 49, 46, 41, 38, 35, 33, 32, 30, 29, 26, 24, 21, 18, //2848
17, 16, 15, 15, 15, 14, 14, 13, 10, 7, 6, 5, 3, 0, -3, -7, //2864
-11, -13, -15, -20, -22, -23, -26, -31, -34, -35, -37, -40, -44, -47, -49, -48, //2880
-48, -47, -47, -45, -42, -40, -37, -33, -30, -28, -22, -18, -13, -10, -7, -1, //2896
4, 9, 12, 14, 16, 23, 26, 28, 31, 32, 31, 32, 34, 34, 33, 32, //2912
30, 28, 26, 26, 26, 26, 25, 24, 24, 24, 23, 22, 20, 18, 16, 14, //2928
11, 6, 7, 7, 6, 4, 2, 1, 1, 1, 0, -2, -3, -4, -7, -10, //2944
-11, -11, -14, -12, -9, -8, -8, -7, -7, -8, -9, -8, -6, -9, -9, -8, //2960
-9, -10, -11, -12, -14, -17, -19, -21, -24, -30, -31, -35, -37, -38, -38, -39, //2976
-41, -39, -39, -39, -35, -33, -31, -29, -27, -25, -24, -24, -23, -23, -22, -20, //2992
-19, -18, -16, -14, -15, -16, -14, -13, -12, -11, -12, -15, -15, -15, -14, -14, //3008
-16, -17, -17, -17, -17, -18, -17, -18, -18, -18, -18, -18, -20, -21, -21, -20, //3024
-18, -20, -22, -20, -18, -17, -17, -14, -15, -14, -12, -10, -9, -7, -4, -3, //3040
-4, -3, 1, 3, 3, 4, 6, 9, 13, 16, 17, 17, 18, 21, 23, 23, //3056
24, 25, 24, 21, 22, 25, 25, 23, 21, 17, 14, 14, 13, 10, 7, 5, //3072
2, -1, -2, -3, -9, -13, -13, -13, -15, -15, -18, -22, -26, -28, -30, -30, //3088
-31, -32, -34, -34, -33, -33, -33, -32, -32, -32, -32, -34, -33, -33, -32, -31, //3104
-27, -23, -20, -16, -13, -11, -6, -3, 0, 3, 5, 7, 12, 16, 20, 22, //3120
22, 24, 26, 29, 31, 33, 33, 36, 37, 37, 37, 38, 38, 37, 37, 38, //3136
40, 40, 37, 37, 37, 36, 35, 35, 37, 37, 34, 32, 32, 32, 31, 31, //3152
32, 32, 31, 30, 31, 33, 34, 34, 34, 38, 38, 37, 35, 34, 34, 35, //3168
35, 34, 32, 30, 27, 27, 28, 27, 26, 26, 26, 24, 22, 22, 21, 18, //3184
17, 17, 15, 13, 12, 9, 7, 7, 6, 6, 6, 5, 3, 2, 2, 3, //3200
3, 4, 4, 4, 4, 4, 7, 6, 6, 5, 5, 5, 5, 6, 6, 5, //3216
2, 0, 1, 2, 1, 0, 0, 0, -1, -2, -3, -4, -4, -8, -9, -8, //3232
-9, -10, -12, -14, -15, -18, -19, -18, -20, -23, -26, -28, -30, -31, -34, -35, //3248
-37, -37, -36, -38, -39, -39, -39, -39, -38, -36, -33, -32, -32, -32, -33, -32, //3264
-29, -27, -26, -24, -19, -17, -16, -14, -13, -10, -6, -3, -1, 1, 5, 7, //3280
11, 14, 15, 17, 20, 26, 28, 27, 27, 28, 28, 32, 34, 36, 34, 32, //3296
32, 35, 36, 34, 32, 30, 31, 31, 31, 29, 24, 20, 18, 17, 15, 11, //3312
8, 7, 6, 4, 2, 1, 1, 0, -2, -4, -5, -6, -8, -10, -11, -12, //3328
-14, -14, -15, -19, -20, -19, -19, -21, -22, -22, -23, -25, -25, -24, -24, -26, //3344
-26, -25, -25, -25, -26, -26, -27, -27, -26, -25, -25, -24, -24, -25, -24, -22, //3360
-22, -20, -19, -18, -18, -19, -18, -17, -17, -18, -19, -16, -15, -17, -18, -17, //3376
-15, -14, -14, -14, -13, -10, -9, -7, -6, -5, -5, -4, -4, -3, -1, 2, //3392
2, 1, 2, 4, 4, 3, 3, 4, 5, 6, 6, 5, 6, 9, 13, 16, //3408
16, 18, 21, 22, 25, 27, 27, 28, 31, 34, 36, 38, 37, 37, 38, 41, //3424
42, 44, 46, 48, 50, 51, 53, 54, 54, 55, 57, 56, 55, 53, 52, 52, //3440
53, 54, 52, 50, 48, 46, 44, 42, 40, 39, 37, 36, 34, 33, 32, 30, //3456
27, 26, 24, 23, 22, 20, 18, 15, 12, 12, 13, 11, 9, 8, 7, 7, //3472
8, 8, 7, 7, 9, 9, 11, 12, 12, 12, 11, 12, 13, 14, 14, 14, //3488
15, 18, 18, 19, 19, 19, 19, 21, 23, 25, 27, 26, 26, 27, 28, 29, //3504
31, 31, 30, 29, 30, 30, 30, 29, 28, 28, 27, 27, 26, 23, 21, 21, //3520
23, 22, 21, 18, 15, 12, 9, 7, 4, 3, 1, -1, -4, -4, -5, -8, //3536
-8, -8, -10, -13, -16, -17, -19, -23, -26, -31, -32, -30, -30, -30, -31, -32, //3552
-31, -30, -28, -26, -26, -27, -25, -24, -25, -28, -31, -31, -31, -33, -34, -36, //3568
-38, -38, -38, -38, -38, -39, -40, -40, -41, -43, -44, -45, -44, -44, -46, -48, //3584
-49, -50, -49, -48, -47, -48, -49, -50, -49, -48, -48, -49, -50, -51, -51, -51, //3600
-49, -48, -48, -48, -47, -46, -46, -48, -50, -50, -51, -51, -50, -52, -54, -53, //3616
-52, -52, -54, -56, -58, -59, -59, -60, -60, -62, -64, -63, -62, -61, -62, -62, //3632
-63, -64, -63, -62, -61, -60, -59, -59, -61, -59, -56, -57, -58, -56, -54, -52, //3648
-49, -46, -44, -41, -39, -36, -31, -28, -27, -26, -26, -24, -20, -16, -14, -13, //3664
-11, -8, -6, -3, -1, -1, 0, 3, 5, 5, 5, 5, 5, 5, 6, 7, //3680
8, 9, 9, 7, 6, 6, 6, 3, 2, 2, 0, -2, -4, -3, -4, -3, //3696
-3, -4, -5, -5, -5, -6, -6, -7, -9, -9, -8, -8, -9, -10, -10, -9, //3712
-10, -12, -14, -13, -13, -14, -15, -17, -17, -20, -22, -22, -22, -23, -27, -26, //3728
-26, -27, -27, -29, -28, -27, -27, -29, -31, -30, -29, -28, -27, -25, -23, -20, //3744
-17, -14, -13, -12, -11, -7, -5, -4, -3, -1, 0, 3, 4, 5, 7, 9, //3760
10, 12, 14, 15, 16, 18, 22, 23, 26, 29, 31, 33, 35, 36, 39, 42, //3776
44, 44, 45, 47, 47, 49, 51, 52, 52, 54, 56, 57, 57, 57, 56, 57, //3792
58, 59, 59, 60, 61, 62, 61, 61, 63, 64, 66, 68, 69, 68, 67, 67, //3808
69, 70, 71, 72, 72, 72, 72, 71, 72, 71, 72, 73, 73, 71, 67, 65, //3824
62, 60, 58, 56, 50, 46, 42, 39, 35, 31, 29, 27, 26, 25, 22, 18, //3840
16, 15, 12, 8, 6, 4, 1, -2, -3, -6, -9, -11, -11, -11, -11, -13, //3856
-16, -18, -17, -17, -17, -17, -18, -18, -18, -17, -15, -15, -17, -16, -15, -15, //3872
-15, -16, -16, -16, -15, -14, -12, -10, -11, -11, -10, -7, -7, -7, -7, -7, //3888
-6, -6, -5, -5, -4, -2, -1, 0, 4, 6, 7, 8, 9, 9, 11, 11, //3904
11, 13, 14, 13, 15, 16, 17, 19, 19, 20, 21, 22, 24, 23, 20, 21, //3920
21, 19, 17, 16, 12, 10, 10, 9, 7, 5, 4, 3, 3, 3, 2, -2, //3936
-5, -5, -6, -8, -11, -16, -17, -17, -19, -22, -24, -28, -30, -30, -32, -37, //3952
-41, -45, -47, -49, -48, -50, -55, -55, -55, -57, -58, -59, -60, -59, -58, -59, //3968
-60, -58, -56, -55, -54, -54, -53, -50, -48, -46, -44, -42, -41, -37, -34, -32, //3984
-30, -28, -24, -21, -18, -14, -13, -12, -10, -8, -7, -6, -4, -2, -2, -3, //4000
-5, -8, -8, -8, -8, -9, -10, -10, -9, -9, -11, -13, -14, -13, -13, -12, //4016
-13, -15, -15, -14, -11, -9, -7, -7, -7, -5, -2, 0, 2, 3, 3, 3, //4032
4, 4, 5, 6, 7, 6, 6, 8, 10, 10, 11, 12, 12, 12, 13, 13, //4048
12, 12, 11, 11, 12, 13, 12, 11, 10, 10, 9, 8, 6, 4, 4, 3, //4064
2, 0, -2, -2, -1, 0, 0, -2, -1, 0, 0, 1, 1, -1, -1, 0, //4080
0, 0, 0, 3, 3, 3, 4, 5, 3, 3, 3, 2, 0, -2, -4, -5, //4096
-6, -8, -10, -12, -14, -15, -16, -16, -18, -20, -20, -19, -19, -21, -21, -20, //4112
-19, -17, -16, -16, -14, -10, -6, -4, -3, -1, 2, 4, 5, 5, 5, 8, //4128
11, 12, 13, 14, 14, 17, 19, 20, 20, 20, 22, 22, 21, 21, 21, 20, //4144
19, 19, 19, 19, 19, 20, 22, 20, 17, 16, 16, 15, 14, 13, 11, 9, //4160
9, 10, 8, 5, 4, 4, 4, 5, 5, 4, 3, 3, 4, 4, 2, 0, //4176
0, 1, 1, 0, 0, 1, 4, 7, 11, 14, 18, 23, 28, 31, 38, 42, //4192
47, 51, 55, 58, 63, 67, 70, 73, 74, 73, 74, 75, 74, 72, 70, 66, //4208
64, 62, 58, 52, 46, 40, 36, 31, 27, 21, 12, 7, 3, -2, -8, -11, //4224
-15, -17, -18, -20, -22, -22, -22, -22, -22, -22, -21, -20, -20, -20, -19, -18, //4240
-17, -14, -11, -10, -10, -12, -11, -7, -7, -9, -12, -14, -15, -18, -20, -23, //4256
-26, -30, -36, -39, -42, -45, -50, -58, -61, -64, -67, -69, -71, -73, -75, -76, //4272
-77, -77, -76, -79, -80, -77, -75, -74, -71, -70, -68, -64, -59, -56, -52, -48, //4288
-44, -39, -35, -29, -22, -19, -15, -8, -1, 7, 12, 16, 20, 24, 29, 36, //4304
37, 40, 43, 46, 48, 52, 54, 54, 54, 55, 57, 57, 58, 59, 61, 63, //4320
66, 69, 71, 72, 71, 72, 75, 77, 79, 82, 83, 85, 87, 88, 90, 93, //4336
94, 94, 96, 98, 100, 102, 103, 106, 106, 106, 104, 102, 100, 96, 90, 85, //4352
80, 74, 65, 59, 50, 40, 31, 23, 12, 3, -7, -16, -27, -40, -45, -51, //4368
-56, -62, -66, -72, -73, -72, -72, -73, -71, -67, -62, -58, -53, -48, -39, -31, //4384
-23, -17, -10, -3, 10, 16, 23, 31, 39, 47, 54, 59, 63, 67, 71, 75, //4400
77, 78, 79, 81, 84, 86, 85, 84, 84, 85, 84, 81, 76, 72, 67, 62, //4416
57, 53, 47, 40, 35, 30, 24, 19, 15, 10, 6, 2, 1, 0, 1, 1, //4432
1, 3, 5, 9, 13, 16, 18, 22, 25, 30, 34, 37, 38, 39, 43, 45, //4448
46, 45, 43, 41, 38, 35, 31, 25, 16, 11, 4, -5, -14, -25, -32, -38, //4464
-45, -54, -61, -71, -76, -82, -88, -95, -100, -106, -109, -111, -115, -118, -119, -121, //4480
-122, -122, -123, -124, -123, -123, -125, -127, -127, -125, -125, -125, -123, -120, -117, -111, //4496
-107, -104, -100, -95, -89, -81, -75, -70, -65, -61, -58, -51, -48, -46, -45, -44, //4512
-41, -39, -39, -38, -37, -36, -35, -36, -37, -37, -37, -39, -39, -38, -38, -39, //4528
-38, -35, -34, -31, -28, -26, -24, -19, -13, -6, -3, };
