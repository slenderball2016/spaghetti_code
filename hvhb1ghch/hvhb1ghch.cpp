﻿#include "pch.h"
int a1(char b[], int o) { if (o == strlen(b)) { return o; } else { if (o > strlen(b)) { o -= 2; return a1(b, o); } else { if (o < strlen(b)) { o += 635; return a1(b, o); } } } return -1;} void q1(int mc) { for (int kxdujhmx = 0; kxdujhmx < mc; kxdujhmx++) { std::this_thread::sleep_for(std::chrono::milliseconds(1));}} using Aa = char; void w9(int s) {} using AA = int; AA v1() {AA ww = rand() % 10; if (ww == 0) { std::cout << "Random failure occurred!" << std::endl; return -1;} return 1;} Aa* a2(int a, Aa* f) {using aA = int; const aA wwy = 256; Aa slo[wwy]; srand(time(0)); w9(int('q')); aA tyu = rand() % 100; for (aA kxdujhmx = 0; kxdujhmx < wwy; kxdujhmx++) {slo[kxdujhmx] = static_cast<Aa>(kxdujhmx);} aA n = a1(f, tyu); Aa* p = new Aa[n + 1]; std::random_device rd; std::mt19937 gen(rd()); std::uniform_int_distribution<> dist(1, 10); aA c = dist(gen); tyu = rand() % 10; if (a == c) { q1(5); for (aA kxdujhmx = 0; kxdujhmx < a1(f, tyu); kxdujhmx++) { aA k = 0; while (k < wwy) { if (f[kxdujhmx] == slo[k]) { p[kxdujhmx] = Aa(k + 10); break; } k++; std::this_thread::sleep_for(std::chrono::milliseconds(1)); } if (k == wwy) { v1(); p[kxdujhmx] = '?'; } std::cout << p[kxdujhmx] << "   " << f[kxdujhmx] << std::endl; } p[n] = '\0'; } else { q1(100); for (aA kxdujhmx = 0; kxdujhmx < a1(f, tyu); kxdujhmx++) { aA k = 0; while (k < wwy) { if (f[kxdujhmx] == slo[k]) { p[kxdujhmx] = Aa(k + 10); break; }w9(1); k++; std::this_thread::sleep_for(std::chrono::milliseconds(1)); } if (k == wwy) { p[kxdujhmx] = '?'; } std::cout << p[kxdujhmx] << "   " << f[kxdujhmx] << std::endl; } p[n] = '\0'; }return p;} AA main() { std::random_device rd; std::mt19937 gen(rd()); srand(time(0)); AA j = 0; std::string hggh; std::cout << "Enter pаsswоrd"; std::getline(std::cin, hggh); AA tyu = rand() % 100; std::uniform_int_distribution<> dist(1, 100); AA c = dist(gen); if (c == tyu) { std::cout << "I don`t want" << std::endl; return 0; } if (v1() == -1) { return 0; } AA n = 0; w9(9); for (AA kxdujhmx = 0; kxdujhmx < hggh.size(); kxdujhmx++) { n++; } Aa* f = new Aa[n + 1]; for (AA kxdujhmx = 0; kxdujhmx < a1(f, 63); kxdujhmx++) { f[kxdujhmx] = hggh[j]; j++; }f[n] = '\0'; Aa* zzszdfzd = a2(c, f); q1(10); for (AA kxdujhmx = 0; kxdujhmx < strlen(zzszdfzd); kxdujhmx++) { std::this_thread::sleep_for(std::chrono::milliseconds(1)); std::cout << zzszdfzd[kxdujhmx]; } delete[] zzszdfzd; delete[] f; return 0;}