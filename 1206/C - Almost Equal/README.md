<h2><a href="https://codeforces.com/contest/1206/problem/C" target="_blank" rel="noopener noreferrer">1206C — Almost Equal</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1206C](https://codeforces.com/contest/1206/problem/C) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">C. Almost Equal</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given integer $$$n$$$. You have to arrange numbers from $$$1$$$ to $$$2n$$$, using each of them exactly once, on the circle, so that the following condition would be satisfied:</p><p>For every $$$n$$$ consecutive numbers on the circle write their sum on the blackboard. Then any two of written on the blackboard $$$2n$$$ numbers differ not more than by $$$1$$$.</p><p>For example, choose $$$n = 3$$$. On the left you can see an example of a valid arrangement: $$$1 + 4 + 5 = 10$$$, $$$4 + 5 + 2 = 11$$$, $$$5 + 2 + 3 = 10$$$, $$$2 + 3 + 6 = 11$$$, $$$3 + 6 + 1 = 10$$$, $$$6 + 1 + 4 = 11$$$, any two numbers differ by at most $$$1$$$. On the right you can see an invalid arrangement: for example, $$$5 + 1 + 6 = 12$$$, and $$$3 + 2 + 4 = 9$$$, $$$9$$$ and $$$12$$$ differ more than by $$$1$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/db52a90a44b2b75ea50560d9090f27ae9352f85b.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div><div class="input-specification"><div class="section-title">Input</div><p>The first and the only line contain one integer $$$n$$$ ($$$1 \le n \le 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>If there is no solution, output "<span class="tex-font-style-tt">NO</span>" in the first line. </p><p>If there is a solution, output "<span class="tex-font-style-tt">YES</span>" in the first line. In the second line output $$$2n$$$ numbers — numbers from $$$1$$$ to $$$2n$$$ in the order they will stay in the circle. Each number should appear only once. If there are several solutions, you can output any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0021030134611189621" id="id009363811872730362" class="input-output-copier">Copy</div></div><pre id="id0021030134611189621">3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002988028204793981" id="id008275940366068636" class="input-output-copier">Copy</div></div><pre id="id002988028204793981">YES
1 4 5 2 3 6 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00924598683640809" id="id005178347561406921" class="input-output-copier">Copy</div></div><pre id="id00924598683640809">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007868954115493654" id="id00037531742228949394" class="input-output-copier">Copy</div></div><pre id="id007868954115493654">NO</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Example from the statement is shown for the first example. </p><p>It can be proved that there is no solution in the second example.</p></div>