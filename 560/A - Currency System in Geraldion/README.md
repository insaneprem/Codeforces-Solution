<h2><a href="https://codeforces.com/contest/560/problem/A" target="_blank" rel="noopener noreferrer">560A — Currency System in Geraldion</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 560A](https://codeforces.com/contest/560/problem/A) |

## Topics
`implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Currency System in Geraldion</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A magic island Geraldion, where Gerald lives, has its own currency system. It uses banknotes of several values. But the problem is, the system is not perfect and sometimes it happens that Geraldionians cannot express a certain sum of money with any set of banknotes. Of course, they can use any number of banknotes of each value. Such sum is called <span class="tex-font-style-it">unfortunate</span>. Gerald wondered: what is the minimum <span class="tex-font-style-it">unfortunate</span> sum?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains number <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 1000</span>) — the number of values of the banknotes that used in Geraldion. </p><p>The second line contains <span class="tex-span"><i>n</i></span> distinct space-separated numbers <span class="tex-span"><i>a</i><sub class="lower-index">1</sub>, <i>a</i><sub class="lower-index">2</sub>, ..., <i>a</i><sub class="lower-index"><i>n</i></sub></span> (<span class="tex-span">1 ≤ <i>a</i><sub class="lower-index"><i>i</i></sub> ≤ 10<sup class="upper-index">6</sup></span>) — the values of the banknotes.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single line — the minimum <span class="tex-font-style-it">unfortunate</span> sum. If there are no unfortunate sums, print <span class="tex-span"> - 1</span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001018854935316379" id="id0017246253699362768" class="input-output-copier">Copy</div></div><pre id="id001018854935316379">5<br>1 2 3 4 5<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005410922055555442" id="id007511019511104339" class="input-output-copier">Copy</div></div><pre id="id005410922055555442">-1<br></pre></div></div></div>