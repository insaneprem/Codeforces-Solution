<h2><a href="https://codeforces.com/contest/1291/problem/D" target="_blank" rel="noopener noreferrer">1291D — Irreducible Anagrams</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1291D](https://codeforces.com/contest/1291/problem/D) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">D. Irreducible Anagrams</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's call two strings $$$s$$$ and $$$t$$$ <span class="tex-font-style-it">anagrams</span> of each other if it is possible to rearrange symbols in the string $$$s$$$ to get a string, equal to $$$t$$$.</p><p>Let's consider two strings $$$s$$$ and $$$t$$$ <span class="tex-font-style-bf">which are anagrams of each other</span>. We say that $$$t$$$ is a <span class="tex-font-style-it">reducible anagram</span> of $$$s$$$ if there exists an integer $$$k \ge 2$$$ and $$$2k$$$ non-empty strings $$$s_1, t_1, s_2, t_2, \dots, s_k, t_k$$$ that satisfy the following conditions:</p><ol> <li> If we write the strings $$$s_1, s_2, \dots, s_k$$$ in order, the resulting string will be equal to $$$s$$$; </li><li> If we write the strings $$$t_1, t_2, \dots, t_k$$$ in order, the resulting string will be equal to $$$t$$$; </li><li> For all integers $$$i$$$ between $$$1$$$ and $$$k$$$ inclusive, $$$s_i$$$ and $$$t_i$$$ are anagrams of each other. </li></ol><p>If such strings don't exist, then $$$t$$$ is said to be an <span class="tex-font-style-it">irreducible anagram</span> of $$$s$$$. <span class="tex-font-style-bf">Note that these notions are only defined when $$$s$$$ and $$$t$$$ are anagrams of each other</span>.</p><p>For example, consider the string $$$s = $$$ "<span class="tex-font-style-tt">gamegame</span>". Then the string $$$t = $$$ "<span class="tex-font-style-tt">megamage</span>" is a reducible anagram of $$$s$$$, we may choose for example $$$s_1 = $$$ "<span class="tex-font-style-tt">game</span>", $$$s_2 = $$$ "<span class="tex-font-style-tt">gam</span>", $$$s_3 = $$$ "<span class="tex-font-style-tt">e</span>" and $$$t_1 = $$$ "<span class="tex-font-style-tt">mega</span>", $$$t_2 = $$$ "<span class="tex-font-style-tt">mag</span>", $$$t_3 = $$$ "<span class="tex-font-style-tt">e</span>":</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/6a53aacfb1d36ae5a64a4cadf6a9c3b488e883be.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>On the other hand, we can prove that $$$t = $$$ "<span class="tex-font-style-tt">memegaga</span>" is an irreducible anagram of $$$s$$$.</p><p>You will be given a string $$$s$$$ and $$$q$$$ queries, represented by two integers $$$1 \le l \le r \le |s|$$$ (where $$$|s|$$$ is equal to the length of the string $$$s$$$). For each query, you should find if the substring of $$$s$$$ formed by characters from the $$$l$$$-th to the $$$r$$$-th has <span class="tex-font-style-underline">at least one</span> irreducible anagram.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a string $$$s$$$, consisting of lowercase English characters ($$$1 \le |s| \le 2 \cdot 10^5$$$).</p><p>The second line contains a single integer $$$q$$$ ($$$1 \le q \le 10^5$$$)  — the number of queries.</p><p>Each of the following $$$q$$$ lines contain two integers $$$l$$$ and $$$r$$$ ($$$1 \le l \le r \le |s|$$$), representing a query for the substring of $$$s$$$ formed by characters from the $$$l$$$-th to the $$$r$$$-th.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, print a single line containing "<span class="tex-font-style-tt">Yes</span>" (without quotes) if the corresponding substring has at least one irreducible anagram, and a single line containing "<span class="tex-font-style-tt">No</span>" (without quotes) otherwise.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005595597399431668" id="id006507058075666639" class="input-output-copier">Copy</div></div><pre id="id005595597399431668">aaaaa
3
1 1
2 4
5 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005896152830070064" id="id008782039680005648" class="input-output-copier">Copy</div></div><pre id="id005896152830070064">Yes
No
Yes
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008154626212390397" id="id008635937344492587" class="input-output-copier">Copy</div></div><pre id="id008154626212390397">aabbbbbbc
6
1 2
2 4
2 2
1 9
5 7
3 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003106773322681521" id="id007625515819919542" class="input-output-copier">Copy</div></div><pre id="id003106773322681521">No
Yes
Yes
Yes
No
No
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, in the first and third queries, the substring is "<span class="tex-font-style-tt">a</span>", which has itself as an irreducible anagram since two or more non-empty strings cannot be put together to obtain "<span class="tex-font-style-tt">a</span>". On the other hand, in the second query, the substring is "<span class="tex-font-style-tt">aaa</span>", which has no irreducible anagrams: its only anagram is itself, and we may choose $$$s_1 = $$$ "<span class="tex-font-style-tt">a</span>", $$$s_2 = $$$ "<span class="tex-font-style-tt">aa</span>", $$$t_1 = $$$ "<span class="tex-font-style-tt">a</span>", $$$t_2 = $$$ "<span class="tex-font-style-tt">aa</span>" to show that it is a reducible anagram.</p><p>In the second query of the second sample, the substring is "<span class="tex-font-style-tt">abb</span>", which has, for example, "<span class="tex-font-style-tt">bba</span>" as an irreducible anagram.</p></div>