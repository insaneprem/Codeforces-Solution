<h2><a href="https://codeforces.com/contest/22/problem/A" target="_blank" rel="noopener noreferrer">22A — Second Order Statistics</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 22A](https://codeforces.com/contest/22/problem/A) |

## Topics
`brute force`

---

## Problem Statement

<div class="header"><div class="title">A. Second Order Statistics</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Once Bob needed to find the second order statistics of a sequence of integer numbers. Lets choose each number from the sequence exactly once and sort them. The value on the second position is the second order statistics of the given sequence. In other words it is the smallest element strictly greater than the minimum. Help Bob solve this problem.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first input line contains integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 100</span>) — amount of numbers in the sequence. The second line contains <span class="tex-span"><i>n</i></span> space-separated integer numbers — elements of the sequence. These numbers don't exceed 100 in absolute value.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If the given sequence has the second order statistics, output this order statistics, otherwise output <span class="tex-font-style-tt">NO</span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005648246087903028" id="id0044509595983122463" class="input-output-copier">Copy</div></div><pre id="id005648246087903028">4<br>1 2 2 -4<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006170177885777925" id="id006427289487340917" class="input-output-copier">Copy</div></div><pre id="id006170177885777925">1<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003830893277202755" id="id007891791882962659" class="input-output-copier">Copy</div></div><pre id="id003830893277202755">5<br>1 2 3 1 1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007068816134868567" id="id007761496464577338" class="input-output-copier">Copy</div></div><pre id="id007068816134868567">2<br></pre></div></div></div>