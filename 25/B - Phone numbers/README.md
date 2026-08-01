<h2><a href="https://codeforces.com/contest/25/problem/B" target="_blank" rel="noopener noreferrer">25B — Phone numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 25B](https://codeforces.com/contest/25/problem/B) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Phone numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Phone number in Berland is a sequence of <span class="tex-span"><i>n</i></span> digits. Often, to make it easier to memorize the number, it is divided into groups of two or three digits. For example, the phone number <span class="tex-font-style-tt">1198733</span> is easier to remember as <span class="tex-font-style-tt">11-987-33</span>. Your task is to find for a given phone number any of its divisions into groups of two or three digits.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">2 ≤ <i>n</i> ≤ 100</span>) — amount of digits in the phone number. The second line contains <span class="tex-span"><i>n</i></span> digits — the phone number to divide into groups.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output any of divisions of the given phone number into groups of two or three digits. Separate groups by single character <span class="tex-font-style-tt">-</span>. If the answer is not unique, output any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0045929700244759386" id="id0038745491681965094" class="input-output-copier">Copy</div></div><pre id="id0045929700244759386">6<br>549871<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004175901565283182" id="id007399331250942063" class="input-output-copier">Copy</div></div><pre id="id004175901565283182">54-98-71</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006940782565349181" id="id008789690962121548" class="input-output-copier">Copy</div></div><pre id="id006940782565349181">7<br>1198733<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007851221969563054" id="id002214357407711346" class="input-output-copier">Copy</div></div><pre id="id007851221969563054">11-987-33<br></pre></div></div></div>