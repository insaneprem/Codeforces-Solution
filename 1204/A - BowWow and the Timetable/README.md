<h2><a href="https://codeforces.com/contest/1204/problem/A" target="_blank" rel="noopener noreferrer">1204A — BowWow and the Timetable</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1204A](https://codeforces.com/contest/1204/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. BowWow and the Timetable</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>In the city of Saint Petersburg, a day lasts for $$$2^{100}$$$ minutes. From the main station of Saint Petersburg, a train departs after $$$1$$$ minute, $$$4$$$ minutes, $$$16$$$ minutes, and so on; in other words, the train departs at time $$$4^k$$$ for each integer $$$k \geq 0$$$. Team BowWow has arrived at the station at the time $$$s$$$ and it is trying to count how many trains have they missed; in other words, the number of trains that have departed <span class="tex-font-style-bf">strictly before</span> time $$$s$$$. For example if $$$s = 20$$$, then they missed trains which have departed at $$$1$$$, $$$4$$$ and $$$16$$$. As you are the only one who knows the time, help them!</p><p>Note that the number $$$s$$$ will be given you in a <a href="https://en.wikipedia.org/wiki/Binary_number#Representation">binary representation</a> without leading zeroes.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single <span class="tex-font-style-bf">binary number</span> $$$s$$$ ($$$0 \leq s  \lt  2^{100}$$$) without leading zeroes.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a single number — the number of trains which have departed strictly before the time $$$s$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008531492292655607" id="id0010889313081080576" class="input-output-copier">Copy</div></div><pre id="id0008531492292655607">100000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0035888486414122955" id="id0043047566323715714" class="input-output-copier">Copy</div></div><pre id="id0035888486414122955">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007718733655870652" id="id007437733506350563" class="input-output-copier">Copy</div></div><pre id="id007718733655870652">101
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008825897829440636" id="id002313180639208935" class="input-output-copier">Copy</div></div><pre id="id008825897829440636">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0012503993611259245" id="id003320844987468884" class="input-output-copier">Copy</div></div><pre id="id0012503993611259245">10100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0027653296913048775" id="id007620823653976031" class="input-output-copier">Copy</div></div><pre id="id0027653296913048775">3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example $$$100000000_2 = 256_{10}$$$, missed trains have departed at $$$1$$$, $$$4$$$, $$$16$$$ and $$$64$$$.</p><p>In the second example $$$101_2 = 5_{10}$$$, trains have departed at $$$1$$$ and $$$4$$$.</p><p>The third example is explained in the statements.</p></div>