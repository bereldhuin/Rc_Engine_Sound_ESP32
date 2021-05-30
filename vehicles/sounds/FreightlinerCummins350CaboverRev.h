const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 4540;
const signed char revSamples[] = {//0
0, 0, 2, 3, 8, 17, 30, 29, 27, 28, 35, 43, 43, 38, 33, 33, //16
35, 34, 30, 29, 32, 36, 37, 35, 32, 32, 31, 29, 25, 23, 25, 27, //32
28, 27, 26, 27, 29, 30, 30, 30, 31, 31, 28, 23, 17, 14, 11, 8, //48
2, -7, -15, -22, -25, -27, -30, -34, -38, -44, -48, -51, -54, -57, -62, -71, //64
-78, -84, -87, -89, -89, -88, -86, -88, -91, -92, -91, -89, -90, -92, -96, -96, //80
-94, -93, -93, -95, -95, -92, -89, -85, -82, -77, -73, -70, -70, -68, -64, -57, //96
-50, -43, -43, -42, -40, -35, -27, -23, -21, -19, -14, -7, 3, 5, 3, 3, //112
6, 9, 12, 9, 8, 9, 13, 13, 9, 6, 7, 12, 17, 19, 16, 13, //128
12, 12, 11, 8, 4, 1, 0, 0, 1, 0, -2, -4, -3, -1, 1, -1, //144
-5, -8, -10, -13, -16, -20, -22, -21, -19, -21, -24, -27, -28, -27, -24, -26, //160
-28, -28, -26, -22, -20, -22, -24, -23, -21, -18, -20, -23, -23, -21, -17, -14, //176
-16, -17, -16, -13, -9, -8, -10, -13, -14, -15, -16, -20, -22, -21, -21, -22, //192
-27, -37, -41, -39, -37, -38, -49, -55, -56, -53, -49, -49, -55, -55, -49, -43, //208
-43, -49, -58, -58, -55, -51, -51, -53, -51, -47, -44, -44, -46, -49, -50, -48, //224
-46, -44, -44, -47, -47, -45, -43, -40, -35, -30, -27, -27, -28, -29, -23, -19, //240
-19, -21, -22, -15, 3, 10, 11, 10, 14, 28, 33, 34, 33, 37, 43, 50, //256
51, 51, 53, 55, 56, 58, 64, 71, 75, 73, 69, 75, 84, 89, 88, 83, //272
76, 78, 80, 77, 72, 67, 61, 57, 56, 56, 58, 59, 55, 52, 51, 53, //288
51, 38, 28, 22, 20, 19, 12, 5, 2, 1, 1, -2, -12, -16, -19, -21, //304
-24, -28, -32, -32, -32, -34, -39, -48, -50, -47, -44, -43, -43, -41, -37, -33, //320
-33, -36, -38, -35, -30, -25, -24, -26, -28, -27, -23, -18, -13, -10, -9, -7, //336
-4, -1, 0, -2, -3, 3, 11, 16, 17, 16, 21, 30, 37, 38, 35, 37, //352
41, 46, 48, 48, 51, 59, 64, 66, 66, 71, 79, 80, 76, 73, 73, 78, //368
84, 82, 78, 74, 73, 75, 78, 77, 74, 69, 66, 69, 71, 70, 62, 54, //384
51, 55, 55, 50, 42, 38, 40, 46, 43, 35, 28, 23, 20, 20, 19, 18, //400
14, 8, 3, 4, 6, 6, 3, -1, -4, -5, -6, -7, -6, -2, -2, -4, //416
-7, -5, -2, 3, 2, -1, -1, 2, 6, 11, 12, 13, 14, 15, 21, 24, //432
25, 24, 21, 21, 24, 27, 28, 29, 32, 37, 39, 38, 37, 37, 38, 39, //448
38, 37, 37, 37, 37, 43, 48, 52, 54, 54, 55, 56, 56, 55, 53, 53, //464
54, 52, 49, 48, 48, 50, 48, 47, 47, 48, 48, 42, 39, 39, 41, 41, //480
37, 32, 33, 37, 39, 37, 34, 32, 32, 32, 34, 36, 37, 33, 31, 33, //496
41, 48, 47, 40, 37, 39, 43, 45, 44, 44, 46, 47, 43, 39, 41, 46, //512
48, 45, 40, 39, 41, 40, 37, 34, 32, 37, 41, 43, 42, 39, 41, 44, //528
47, 47, 44, 42, 45, 48, 50, 51, 53, 56, 63, 66, 64, 63, 63, 64, //544
64, 63, 63, 65, 66, 62, 59, 57, 58, 60, 59, 56, 55, 53, 51, 49, //560
49, 50, 50, 49, 45, 42, 42, 39, 32, 26, 23, 24, 28, 29, 30, 31, //576
31, 28, 24, 21, 19, 18, 17, 10, 5, 2, 3, 7, 14, 13, 8, 2, //592
-1, 0, 1, -3, -9, -13, -12, -7, -6, -9, -14, -16, -15, -14, -14, -16, //608
-17, -18, -18, -20, -20, -18, -13, -10, -9, -12, -10, -7, -4, -3, -7, -7, //624
-6, -5, -5, -4, 4, 9, 12, 10, 6, 4, 8, 11, 13, 15, 17, 20, //640
21, 22, 25, 28, 27, 23, 22, 23, 26, 26, 22, 19, 19, 23, 26, 27, //656
23, 21, 20, 18, 15, 12, 8, 9, 9, 7, 4, 1, -3, -6, -13, -19, //672
-23, -23, -23, -25, -28, -30, -28, -26, -27, -32, -37, -42, -44, -49, -54, -58, //688
-61, -65, -70, -70, -69, -67, -67, -70, -76, -80, -84, -89, -96, -100, -102, -102, //704
-105, -111, -118, -122, -122, -122, -121, -123, -124, -123, -120, -116, -113, -112, -111, -107, //720
-101, -97, -93, -89, -82, -75, -70, -67, -64, -58, -48, -43, -42, -40, -33, -20, //736
-12, -7, -4, -2, 1, 8, 12, 15, 15, 15, 16, 22, 28, 32, 30, 27, //752
27, 31, 33, 31, 28, 26, 31, 32, 29, 27, 29, 34, 37, 29, 18, 13, //768
16, 25, 22, 15, 10, 10, 12, 8, 1, -5, -7, -6, -5, -13, -20, -24, //784
-24, -26, -32, -38, -45, -50, -54, -60, -72, -78, -80, -78, -78, -83, -96, -100, //800
-100, -98, -98, -102, -104, -104, -105, -107, -108, -105, -101, -99, -98, -99, -97, -92, //816
-88, -84, -81, -79, -78, -77, -76, -75, -73, -72, -70, -66, -62, -59, -56, -53, //832
-47, -43, -40, -38, -34, -28, -28, -31, -34, -33, -29, -22, -19, -18, -17, -15, //848
-11, -4, 0, 4, 7, 9, 10, 7, 5, 4, 4, 7, 11, 13, 15, 15, //864
15, 15, 16, 17, 17, 17, 19, 19, 16, 10, 5, 4, 7, 8, 5, 1, //880
1, 3, 3, -2, -7, -7, -3, 1, -2, -6, -8, -7, -6, -5, -5, -5, //896
-6, -10, -13, -18, -17, -17, -21, -25, -29, -29, -27, -26, -25, -24, -22, -23, //912
-27, -32, -34, -35, -34, -34, -35, -36, -35, -34, -32, -31, -31, -31, -33, -33, //928
-31, -31, -31, -32, -31, -31, -32, -34, -38, -41, -45, -50, -51, -51, -52, -54, //944
-56, -57, -56, -56, -59, -62, -65, -65, -63, -62, -61, -61, -66, -68, -70, -68, //960
-65, -64, -65, -63, -60, -55, -51, -51, -50, -47, -42, -36, -31, -27, -26, -24, //976
-19, -15, -12, -13, -13, -11, -10, -8, -6, -3, 0, 2, 6, 9, 15, 19, //992
20, 22, 21, 20, 17, 14, 12, 11, 11, 15, 17, 17, 17, 17, 16, 16, //1008
14, 12, 9, 6, 6, 10, 13, 11, 5, -2, -5, -2, -2, -5, -9, -11, //1024
-10, -10, -10, -10, -9, -9, -12, -16, -20, -22, -24, -30, -33, -35, -35, -36, //1040
-38, -36, -33, -32, -35, -40, -44, -42, -39, -38, -37, -37, -36, -36, -38, -40, //1056
-42, -44, -47, -48, -46, -43, -38, -30, -24, -21, -20, -20, -21, -15, -10, -7, //1072
-6, -3, 1, 7, 9, 11, 15, 21, 28, 30, 32, 38, 46, 52, 55, 54, //1088
53, 56, 59, 62, 66, 65, 64, 64, 64, 65, 60, 54, 52, 54, 58, 56, //1104
51, 50, 55, 60, 62, 58, 54, 53, 54, 55, 53, 51, 49, 46, 45, 47, //1120
51, 52, 50, 48, 45, 42, 39, 37, 36, 35, 35, 36, 37, 36, 34, 33, //1136
30, 30, 27, 22, 18, 19, 23, 28, 26, 23, 20, 21, 26, 28, 28, 28, //1152
30, 32, 34, 34, 33, 33, 34, 36, 40, 43, 47, 49, 50, 50, 50, 55, //1168
60, 62, 62, 60, 59, 59, 60, 59, 58, 58, 58, 60, 62, 64, 69, 69, //1184
67, 66, 66, 69, 69, 67, 65, 65, 68, 69, 66, 63, 63, 66, 70, 70, //1200
66, 63, 62, 62, 63, 63, 60, 57, 52, 49, 48, 48, 47, 44, 39, 35, //1216
34, 35, 34, 29, 23, 21, 25, 28, 27, 26, 26, 30, 34, 34, 32, 31, //1232
33, 39, 41, 42, 43, 47, 52, 57, 59, 60, 63, 65, 68, 70, 70, 69, //1248
68, 70, 72, 70, 66, 62, 59, 59, 58, 56, 54, 52, 51, 46, 43, 42, //1264
42, 43, 42, 34, 30, 27, 26, 26, 27, 33, 37, 38, 37, 35, 38, 42, //1280
46, 47, 47, 47, 47, 48, 48, 48, 49, 50, 51, 51, 51, 51, 51, 50, //1296
49, 46, 42, 37, 31, 28, 30, 34, 36, 34, 31, 31, 34, 36, 35, 33, //1312
37, 44, 48, 48, 44, 42, 44, 44, 42, 40, 41, 44, 46, 45, 43, 41, //1328
41, 41, 41, 40, 37, 33, 29, 25, 21, 14, 9, 7, 12, 12, 8, 2, //1344
-2, -1, -1, -5, -12, -19, -21, -22, -21, -19, -19, -19, -20, -23, -25, -25, //1360
-26, -25, -25, -26, -29, -32, -31, -29, -26, -28, -31, -31, -29, -27, -28, -30, //1376
-29, -25, -21, -18, -16, -12, -6, -2, -1, -2, 0, 6, 13, 18, 17, 15, //1392
18, 26, 33, 36, 37, 37, 39, 40, 39, 36, 33, 31, 33, 36, 38, 39, //1408
36, 32, 29, 24, 20, 17, 10, 5, -1, -6, -10, -13, -19, -25, -30, -33, //1424
-36, -41, -44, -46, -46, -49, -54, -64, -67, -66, -65, -67, -71, -76, -79, -82, //1440
-87, -91, -92, -90, -89, -93, -100, -107, -110, -109, -108, -110, -113, -113, -111, -113, //1456
-118, -124, -127, -125, -122, -119, -119, -119, -116, -107, -100, -96, -94, -91, -84, -78, //1472
-74, -71, -65, -56, -41, -33, -25, -19, -14, -9, -5, -3, 0, 5, 12, 22, //1488
28, 33, 35, 36, 37, 38, 37, 34, 30, 29, 29, 29, 25, 21, 22, 26, //1504
32, 29, 24, 20, 18, 18, 14, 9, 5, 3, 4, 6, 4, 0, -5, -8, //1520
-10, -11, -14, -20, -24, -24, -20, -19, -22, -28, -35, -38, -38, -40, -46, -53, //1536
-60, -64, -67, -67, -67, -69, -72, -75, -76, -77, -81, -84, -85, -85, -83, -83, //1552
-82, -81, -79, -77, -77, -77, -76, -73, -69, -62, -60, -60, -60, -58, -54, -44, //1568
-40, -39, -38, -35, -24, -16, -10, -9, -8, -7, -3, 0, 2, 3, 3, 2, //1584
2, 2, 1, 1, 1, 2, 1, -1, -4, -5, -3, -5, -12, -19, -21, -19, //1600
-17, -21, -29, -36, -38, -37, -37, -39, -40, -39, -36, -34, -37, -43, -47, -48, //1616
-46, -40, -40, -40, -37, -29, -20, -18, -26, -32, -30, -23, -14, -15, -19, -19, //1632
-15, -10, -11, -16, -19, -16, -9, -1, 2, -1, -3, -3, -2, -1, 1, 4, //1648
6, 5, 2, 0, 4, 11, 17, 20, 19, 17, 17, 19, 22, 22, 20, 14, //1664
11, 8, 8, 9, 9, 10, 9, 4, -3, -9, -14, -16, -17, -22, -28, -35, //1680
-39, -40, -40, -44, -50, -61, -67, -71, -73, -74, -76, -83, -87, -90, -92, -94, //1696
-98, -102, -103, -103, -105, -106, -104, -102, -97, -93, -88, -84, -78, -75, -73, -69, //1712
-63, -57, -52, -52, -51, -48, -41, -33, -27, -23, -20, -17, -15, -10, -4, 3, //1728
7, 8, 5, 4, 7, 13, 19, 22, 24, 24, 25, 29, 33, 34, 32, 29, //1744
28, 28, 30, 30, 30, 31, 33, 36, 36, 30, 25, 22, 21, 21, 18, 12, //1760
8, 4, 1, 0, -1, -4, -8, -11, -12, -12, -13, -15, -18, -22, -26, -31, //1776
-39, -41, -42, -42, -43, -44, -44, -44, -44, -44, -45, -45, -46, -47, -46, -44, //1792
-41, -38, -35, -31, -25, -22, -25, -28, -28, -24, -20, -18, -23, -26, -25, -20, //1808
-15, -14, -20, -20, -16, -10, -5, -5, -6, -5, 0, 6, 10, 12, 12, 13, //1824
15, 17, 19, 20, 21, 25, 28, 31, 33, 34, 37, 41, 43, 43, 39, 38, //1840
39, 41, 41, 37, 29, 29, 33, 35, 32, 25, 26, 32, 37, 37, 32, 26, //1856
25, 25, 23, 20, 18, 18, 20, 22, 26, 31, 32, 30, 30, 33, 37, 39, //1872
37, 34, 34, 34, 33, 32, 36, 41, 44, 45, 44, 50, 55, 59, 59, 57, //1888
55, 58, 57, 53, 50, 51, 56, 61, 59, 56, 57, 63, 72, 74, 71, 69, //1904
68, 70, 74, 73, 70, 67, 66, 70, 72, 72, 69, 65, 64, 66, 67, 68, //1920
67, 66, 63, 57, 54, 52, 51, 47, 45, 45, 44, 42, 40, 38, 39, 36, //1936
30, 22, 18, 19, 19, 15, 9, 7, 10, 15, 15, 12, 10, 9, 8, 7, //1952
4, 0, -4, -8, -10, -9, -7, -4, 0, 4, 7, 6, 4, 4, 5, 8, //1968
10, 11, 12, 15, 22, 29, 35, 35, 35, 38, 44, 52, 51, 50, 54, 61, //1984
69, 72, 69, 70, 75, 82, 85, 83, 82, 86, 91, 94, 91, 88, 89, 93, //2000
97, 98, 96, 95, 96, 94, 91, 87, 84, 86, 86, 83, 79, 74, 74, 75, //2016
73, 70, 68, 69, 69, 65, 59, 55, 54, 56, 54, 48, 41, 38, 38, 38, //2032
36, 33, 30, 28, 25, 21, 17, 13, 11, 11, 8, 7, 6, 6, 6, 0, //2048
-5, -8, -10, -9, -10, -14, -17, -18, -18, -20, -27, -31, -35, -34, -30, -26, //2064
-23, -22, -21, -20, -17, -16, -21, -23, -20, -12, -4, 0, 0, 3, 9, 15, //2080
17, 19, 25, 32, 38, 38, 35, 35, 37, 39, 37, 34, 37, 41, 44, 45, //2096
44, 47, 53, 50, 43, 37, 37, 41, 41, 36, 32, 34, 40, 47, 45, 42, //2112
43, 46, 50, 53, 53, 54, 54, 53, 50, 46, 44, 42, 40, 37, 32, 26, //2128
21, 18, 18, 20, 16, 7, -2, -7, -6, -6, -16, -27, -34, -35, -34, -36, //2144
-39, -41, -38, -34, -31, -31, -32, -34, -37, -39, -39, -39, -40, -41, -40, -38, //2160
-35, -36, -37, -36, -34, -33, -33, -34, -36, -37, -39, -41, -44, -45, -48, -50, //2176
-50, -48, -46, -44, -42, -39, -35, -30, -29, -29, -28, -26, -23, -20, -18, -15, //2192
-11, -5, -1, -1, -2, -2, 2, 7, 7, 4, 2, 1, 1, 0, -3, -7, //2208
-9, -11, -13, -16, -19, -21, -25, -30, -32, -34, -33, -33, -33, -34, -35, -34, //2224
-32, -31, -30, -29, -26, -23, -23, -24, -27, -30, -33, -35, -37, -41, -43, -44, //2240
-45, -46, -49, -51, -52, -53, -54, -57, -61, -65, -67, -69, -69, -71, -73, -75, //2256
-77, -77, -76, -74, -72, -70, -68, -64, -60, -56, -52, -48, -41, -37, -35, -34, //2272
-31, -21, -13, -6, -4, -6, -8, -5, 0, 4, 6, 5, 5, 10, 13, 13, //2288
10, 5, 2, 5, 8, 9, 7, 2, -3, -4, -5, -8, -12, -16, -19, -20, //2304
-21, -22, -21, -17, -14, -12, -11, -11, -12, -19, -23, -27, -30, -30, -32, -35, //2320
-36, -40, -44, -48, -51, -49, -50, -55, -64, -70, -72, -71, -72, -75, -77, -78, //2336
-79, -81, -83, -84, -85, -85, -87, -86, -83, -82, -81, -79, -75, -70, -65, -62, //2352
-59, -55, -51, -45, -41, -38, -31, -27, -25, -25, -25, -24, -21, -19, -17, -15, //2368
-11, -3, 2, 4, 4, 3, 1, -1, -3, -5, -6, -6, -5, -5, -3, -1, //2384
3, 6, 8, 7, 6, 5, 4, 3, 3, 3, 3, 2, 0, -2, -1, -1, //2400
-3, -7, -10, -11, -10, -9, -10, -11, -12, -12, -13, -15, -17, -20, -25, -33, //2416
-37, -40, -42, -42, -44, -45, -45, -45, -44, -44, -50, -52, -51, -48, -45, -44, //2432
-47, -50, -50, -49, -49, -49, -49, -48, -48, -48, -48, -47, -44, -41, -38, -37, //2448
-36, -35, -34, -33, -32, -31, -28, -27, -27, -29, -31, -32, -29, -25, -19, -14, //2464
-11, -11, -12, -13, -14, -16, -20, -25, -25, -25, -25, -27, -29, -27, -22, -21, //2480
-25, -30, -33, -30, -27, -27, -29, -30, -28, -27, -29, -33, -34, -33, -31, -31, //2496
-33, -35, -34, -31, -27, -23, -21, -18, -18, -16, -12, -9, -6, -4, -2, -1, //2512
1, 3, 6, 8, 12, 14, 16, 19, 20, 20, 20, 20, 21, 23, 25, 27, //2528
28, 28, 29, 29, 28, 28, 28, 28, 28, 27, 24, 23, 25, 29, 31, 29, //2544
25, 23, 24, 24, 21, 17, 9, 5, 4, 2, -1, -5, -10, -12, -13, -15, //2560
-17, -19, -20, -19, -19, -19, -19, -22, -24, -30, -36, -39, -38, -36, -37, -42, //2576
-45, -43, -36, -27, -28, -31, -33, -31, -27, -27, -30, -33, -33, -29, -23, -22, //2592
-23, -23, -20, -15, -10, -10, -11, -11, -11, -12, -13, -12, -9, -3, 5, 15, //2608
19, 22, 26, 31, 35, 42, 44, 45, 45, 47, 52, 54, 59, 63, 68, 74, //2624
77, 76, 77, 79, 80, 81, 80, 79, 80, 81, 82, 81, 80, 78, 75, 71, //2640
70, 70, 69, 65, 62, 58, 54, 51, 47, 44, 43, 43, 42, 37, 32, 28, //2656
26, 28, 29, 27, 24, 21, 20, 18, 18, 16, 15, 13, 10, 8, 9, 11, //2672
12, 10, 7, 6, 8, 11, 10, 6, 1, 0, 0, 0, -3, -4, 2, 6, //2688
7, 4, 0, 0, 8, 12, 14, 14, 14, 17, 19, 19, 19, 22, 25, 28, //2704
27, 27, 29, 36, 43, 51, 54, 54, 54, 54, 53, 52, 53, 57, 60, 63, //2720
61, 60, 61, 64, 68, 70, 66, 66, 70, 73, 76, 72, 68, 67, 69, 70, //2736
67, 60, 58, 60, 64, 65, 64, 60, 59, 58, 56, 52, 48, 48, 50, 49, //2752
47, 44, 42, 42, 41, 39, 37, 37, 42, 43, 39, 32, 25, 26, 32, 37, //2768
36, 33, 31, 34, 38, 42, 45, 48, 52, 58, 58, 57, 58, 62, 63, 58, //2784
53, 50, 53, 55, 55, 53, 54, 58, 61, 58, 50, 44, 43, 46, 47, 36, //2800
26, 20, 20, 23, 24, 21, 20, 23, 28, 30, 24, 17, 15, 18, 21, 22, //2816
19, 20, 26, 34, 38, 39, 40, 44, 49, 52, 51, 48, 46, 44, 42, 40, //2832
41, 47, 47, 44, 41, 43, 48, 53, 50, 45, 41, 41, 39, 34, 30, 30, //2848
32, 32, 29, 28, 31, 37, 42, 45, 43, 39, 36, 33, 30, 28, 26, 25, //2864
24, 25, 28, 31, 31, 31, 31, 32, 31, 25, 21, 19, 19, 18, 13, 9, //2880
6, 4, 3, 3, 6, 10, 11, 8, 1, -5, -3, 0, -2, -8, -14, -13, //2896
-10, -10, -15, -20, -20, -11, -8, -11, -17, -22, -21, -19, -21, -27, -32, -31, //2912
-26, -25, -28, -31, -31, -27, -19, -19, -23, -26, -26, -26, -27, -29, -28, -23, //2928
-20, -21, -23, -21, -16, -11, -10, -15, -15, -9, -5, -5, -10, -12, -10, -6, //2944
-4, -7, -8, -5, -2, -3, -7, -11, -12, -11, -13, -18, -24, -28, -27, -27, //2960
-30, -35, -40, -43, -42, -41, -44, -49, -52, -53, -52, -54, -59, -64, -68, -68, //2976
-72, -78, -85, -87, -81, -78, -79, -86, -89, -89, -87, -88, -92, -97, -97, -92, //2992
-89, -87, -85, -83, -80, -76, -72, -68, -64, -60, -57, -56, -54, -52, -47, -42, //3008
-38, -36, -34, -31, -26, -22, -17, -13, -8, -2, 4, 9, 13, 14, 15, 16, //3024
17, 18, 19, 19, 18, 17, 17, 19, 21, 23, 22, 18, 16, 13, 12, 11, //3040
7, 4, 2, 0, -3, -8, -11, -12, -11, -14, -20, -26, -28, -28, -31, -38, //3056
-43, -45, -45, -45, -47, -48, -49, -49, -51, -58, -65, -70, -75, -78, -82, -87, //3072
-89, -88, -87, -87, -89, -92, -94, -92, -91, -91, -94, -95, -91, -86, -83, -86, //3088
-88, -87, -83, -79, -77, -76, -72, -67, -62, -58, -57, -52, -47, -43, -42, -41, //3104
-34, -27, -20, -16, -14, -12, -4, 0, 0, -3, -5, -6, -2, -1, -1, -1, //3120
0, 8, 13, 16, 19, 20, 20, 23, 24, 23, 21, 21, 21, 25, 27, 28, //3136
29, 32, 35, 36, 36, 37, 39, 39, 32, 27, 27, 31, 34, 32, 21, 16, //3152
13, 9, 2, -10, -13, -12, -11, -15, -23, -31, -33, -33, -34, -40, -44, -45, //3168
-43, -44, -48, -52, -53, -47, -42, -42, -46, -50, -45, -38, -36, -37, -39, -39, //3184
-32, -28, -24, -20, -15, -9, -8, -9, -12, -11, -8, -8, -12, -18, -23, -23, //3200
-21, -19, -20, -22, -19, -15, -13, -14, -16, -16, -15, -14, -20, -24, -25, -23, //3216
-21, -22, -27, -30, -30, -30, -31, -30, -29, -27, -27, -29, -31, -31, -30, -30, //3232
-32, -36, -38, -37, -34, -33, -34, -36, -35, -31, -28, -28, -29, -29, -27, -23, //3248
-20, -19, -19, -21, -20, -17, -15, -14, -14, -16, -15, -12, -10, -11, -13, -13, //3264
-9, -2, 1, -1, -9, -14, -15, -15, -16, -19, -26, -29, -33, -34, -33, -30, //3280
-25, -24, -25, -26, -25, -23, -22, -23, -26, -25, -24, -23, -25, -29, -30, -27, //3296
-24, -24, -26, -28, -29, -29, -30, -33, -34, -36, -38, -39, -42, -43, -45, -48, //3312
-50, -49, -49, -52, -57, -60, -59, -55, -53, -52, -51, -49, -48, -48, -46, -43, //3328
-40, -39, -38, -35, -31, -28, -26, -22, -13, -7, -5, -6, -6, -2, 8, 11, //3344
11, 11, 14, 18, 23, 23, 23, 23, 23, 22, 20, 19, 20, 23, 26, 31, //3360
33, 34, 34, 34, 34, 35, 34, 33, 31, 31, 32, 33, 32, 30, 27, 26, //3376
33, 36, 37, 36, 33, 33, 35, 39, 44, 47, 48, 43, 41, 41, 43, 44, //3392
41, 35, 35, 36, 38, 36, 32, 33, 37, 41, 40, 36, 33, 36, 40, 39, //3408
33, 26, 25, 28, 30, 27, 23, 26, 31, 33, 30, 23, 21, 29, 37, 41, //3424
40, 37, 35, 37, 37, 35, 32, 29, 29, 33, 40, 47, 51, 49, 45, 47, //3440
53, 56, 56, 52, 49, 53, 58, 63, 63, 60, 60, 61, 63, 62, 61, 57, //3456
56, 55, 55, 54, 53, 51, 50, 52, 55, 56, 50, 43, 39, 41, 45, 47, //3472
41, 36, 35, 39, 42, 42, 38, 36, 36, 35, 32, 28, 28, 29, 29, 31, //3488
34, 40, 42, 40, 38, 39, 42, 48, 47, 44, 41, 39, 42, 46, 51, 54, //3504
55, 56, 59, 61, 63, 63, 62, 61, 58, 57, 58, 61, 65, 65, 60, 57, //3520
58, 64, 67, 60, 52, 49, 54, 61, 59, 49, 39, 37, 41, 43, 41, 38, //3536
38, 40, 41, 40, 39, 41, 46, 48, 49, 47, 47, 48, 49, 52, 54, 55, //3552
53, 52, 53, 56, 59, 59, 57, 56, 59, 61, 62, 61, 59, 57, 56, 56, //3568
59, 60, 62, 61, 61, 65, 72, 72, 67, 62, 62, 67, 66, 61, 56, 56, //3584
61, 65, 59, 51, 48, 50, 54, 51, 45, 40, 38, 38, 36, 32, 27, 21, //3600
16, 11, 8, 5, 2, -3, -8, -12, -16, -18, -20, -22, -21, -18, -17, -18, //3616
-21, -23, -22, -22, -22, -21, -19, -16, -13, -11, -10, -8, -7, -5, -5, -4, //3632
-4, -6, -10, -12, -11, -7, -3, 0, 1, 4, 9, 8, 4, -1, -2, 4, //3648
10, 13, 11, 7, 5, 11, 15, 18, 19, 17, 17, 21, 23, 24, 22, 19, //3664
16, 16, 16, 16, 14, 12, 12, 13, 12, 9, 7, 4, 2, -1, -6, -10, //3680
-12, -15, -18, -23, -28, -31, -35, -43, -44, -42, -38, -35, -35, -36, -36, -34, //3696
-33, -32, -36, -38, -40, -43, -45, -46, -46, -47, -50, -54, -58, -62, -63, -64, //3712
-67, -71, -76, -86, -89, -89, -86, -83, -83, -89, -94, -97, -98, -99, -98, -95, //3728
-92, -89, -85, -82, -77, -73, -68, -61, -54, -49, -50, -52, -49, -42, -33, -26, //3744
-26, -24, -17, -6, 3, 8, 6, 6, 8, 11, 14, 18, 19, 20, 22, 24, //3760
24, 22, 19, 16, 14, 14, 15, 12, 9, 8, 9, 9, 6, 4, 4, 4, //3776
3, -7, -13, -16, -16, -16, -17, -22, -23, -24, -24, -26, -28, -29, -30, -31, //3792
-33, -34, -37, -39, -39, -38, -37, -37, -42, -46, -45, -43, -41, -42, -47, -49, //3808
-48, -45, -46, -49, -49, -46, -42, -41, -43, -44, -43, -41, -39, -38, -34, -32, //3824
-30, -29, -27, -23, -19, -18, -19, -18, -17, -14, -9, -6, -4, -3, -2, -2, //3840
-5, -7, -10, -10, -8, -9, -12, -15, -19, -21, -20, -20, -20, -21, -22, -22, //3856
-26, -30, -35, -37, -36, -34, -38, -45, -50, -50, -45, -40, -43, -48, -47, -42, //3872
-37, -35, -36, -33, -26, -22, -23, -26, -24, -16, -7, -3, -6, -9, -4, 2, //3888
4, 1, -5, -2, 3, 6, 3, -3, -5, -2, 3, 2, -1, -2, 2, 4, //3904
3, -1, -5, -6, -5, -5, -6, -6, -5, 1, 3, 2, -2, -7, -8, -5, //3920
-6, -10, -15, -17, -16, -16, -17, -20, -20, -17, -13, -15, -21, -27, -29, -29, //3936
-31, -34, -37, -39, -41, -47, -51, -55, -56, -54, -54, -58, -63, -67, -69, -70, //3952
-70, -70, -69, -66, -64, -63, -64, -65, -63, -60, -58, -58, -61, -63, -64, -62, //3968
-61, -61, -61, -58, -54, -49, -44, -42, -43, -42, -40, -38, -38, -41, -41, -40, //3984
-38, -35, -33, -30, -27, -23, -22, -22, -18, -17, -18, -22, -25, -26, -22, -20, //4000
-19, -18, -14, -6, -3, -3, -4, -6, -6, -7, -10, -13, -15, -17, -19, -20, //4016
-20, -18, -16, -16, -18, -20, -21, -24, -28, -30, -32, -32, -32, -34, -35, -32, //4032
-33, -36, -42, -45, -44, -40, -39, -40, -42, -42, -43, -44, -45, -46, -46, -46, //4048
-46, -45, -45, -46, -48, -48, -46, -44, -44, -46, -46, -42, -34, -33, -35, -38, //4064
-37, -33, -29, -29, -28, -24, -20, -15, -15, -15, -15, -15, -15, -14, -11, -7, //4080
-4, -2, -1, 0, 1, 2, 3, 3, 3, 1, 0, 1, 2, 4, 5, 5, //4096
6, 8, 10, 9, 7, 8, 9, 9, 8, 6, 7, 9, 10, 10, 7, 9, //4112
12, 16, 19, 19, 18, 20, 22, 24, 23, 20, 20, 24, 30, 33, 32, 31, //4128
32, 36, 39, 39, 38, 38, 42, 46, 47, 45, 42, 45, 49, 52, 52, 49, //4144
47, 49, 51, 54, 52, 48, 48, 53, 60, 65, 64, 61, 60, 62, 65, 65, //4160
62, 59, 58, 60, 63, 63, 61, 59, 59, 62, 64, 64, 64, 65, 67, 69, //4176
68, 68, 68, 67, 65, 63, 62, 63, 61, 58, 58, 62, 65, 68, 64, 61, //4192
61, 63, 64, 61, 52, 48, 48, 52, 53, 49, 45, 44, 47, 52, 51, 42, //4208
36, 36, 40, 44, 45, 43, 41, 40, 37, 33, 30, 32, 37, 39, 37, 34, //4224
33, 36, 38, 35, 28, 22, 24, 29, 33, 34, 34, 39, 42, 44, 46, 46, //4240
46, 48, 48, 48, 49, 52, 53, 52, 52, 54, 61, 70, 75, 73, 71, 71, //4256
72, 73, 74, 74, 77, 80, 81, 82, 82, 83, 84, 83, 83, 87, 87, 85, //4272
82, 81, 84, 88, 85, 80, 76, 76, 78, 79, 76, 73, 70, 67, 64, 62, //4288
61, 60, 59, 58, 56, 52, 48, 44, 42, 45, 46, 43, 40, 38, 38, 37, //4304
34, 28, 23, 21, 19, 16, 13, 9, 7, 6, 5, 6, 8, 8, 6, 0, //4320
-11, -13, -12, -14, -17, -19, -16, -11, -10, -12, -16, -15, -10, -6, -3, -2, //4336
-1, 3, 6, 9, 13, 16, 17, 16, 18, 22, 25, 26, 24, 25, 28, 32, //4352
34, 33, 34, 36, 39, 37, 34, 33, 35, 37, 36, 33, 30, 32, 35, 36, //4368
37, 40, 43, 46, 47, 47, 50, 54, 57, 57, 55, 54, 54, 53, 51, 48, //4384
48, 48, 49, 49, 40, 33, 26, 21, 17, 14, 5, -1, -6, -10, -14, -21, //4400
-25, -31, -35, -41, -46, -52, -56, -58, -58, -56, -56, -56, -57, -59, -59, -59, //4416
-61, -62, -64, -65, -65, -64, -62, -60, -57, -55, -51, -50, -53, -55, -57, -56, //4432
-53, -53, -55, -58, -57, -54, -53, -52, -49, -44, -36, -34, -38, -40, -36, -29, //4448
-23, -21, -19, -15, -10, -6, -6, -7, -4, 0, 4, 6, 5, 4, 4, 6, //4464
7, 8, 10, 12, 12, 10, 9, 6, 3, 0, -2, -4, -7, -7, -7, -8, //4480
-9, -10, -12, -13, -14, -18, -24, -29, -32, -31, -28, -28, -29, -32, -36, -44, //4496
-51, -58, -63, -65, -67, -72, -76, -78, -80, -82, -86, -92, -94, -95, -97, -98, //4512
-104, -108, -112, -115, -114, -111, -108, -108, -109, -107, -102, -94, -80, -74, -68, -59, //4528
-50, -38, -32, -28, -23, -19, -14, -8, -5, -3, -1, 0, };
