# HYCminer NVIDIA

HYCminer is a high performance Hycon (HYC) NVIDIA miner, forked from [XMRig](https://github.com/xmrig/xmrig) release v2.6.1.

* This is the **NVIDIA GPU** mining version, there is also a [CPU version](https://github.com/team-hycon/xmrig) and [AMD GPU version](https://github.com/team-hycon/xmrig-amd).
* We plan on releasing our roadmap for next releases soon.

#### Table of contents
* [Features](#features)
* [Download](#download)
* [Usage](#usage)
* [Algorithm variations](#algorithm-variations)
* [Build](https://github.com/team-hycon/xmrig-nvidia/wiki/Build)
* [Common Issues](#common-issues)
* [Other information](#other-information)
* [Contacts](#contacts)

## Features
* Currently running Cryptonight v7
* High performance.
* Official Windows support.
* Support for backup (failover) mining server.
* CryptoNight-Lite support for AEON.
* Automatic GPU configuration.
* GPU health monitoring (clocks, power, temperature, fan speed) 
* Nicehash support.
* It's open source software.

## Download
* Binary releases: TBA
* Git tree: https://github.com/team-hycon/xmrig-nvidia.git
    * Clone with `git clone https://github.com/team-hycon/xmrig-nvidia.git` :hammer: [Build instructions](https://github.com/team-hycon/xmrig-nvidia/wiki/Build).

## Usage
See the example `config.json` to configure the miner.

### Command line options
```
  -a, --algo=ALGO           cryptonight (default) or cryptonight-lite
  -o, --url=URL             URL of mining server
  -O, --userpass=U:P        username:password pair for mining server
  -u, --user=USERNAME       username for mining server
  -p, --pass=PASSWORD       password for mining server
  -k, --keepalive           send keepalived for prevent timeout (need pool support)
  -r, --retries=N           number of times to retry before switch to backup server (default: 5)
  -R, --retry-pause=N       time to pause between retries (default: 5)
      --cuda-devices=N      List of CUDA devices to use.
      --cuda-launch=TxB     List of launch config for the CryptoNight kernel
      --cuda-max-threads=N  limit maximum count of GPU threads in automatic mode
      --cuda-bfactor=[0-12] run CryptoNight core kernel in smaller pieces
      --cuda-bsleep=N       insert a delay of N microseconds between kernel launches
      --cuda-affinity=N     affine GPU threads to a CPU
      --no-color            disable colored output
      --donate-level=N      donate level, default 5% (5 minutes in 100 minutes)
      --user-agent          set custom user-agent string for pool
  -B, --background          run the miner in the background
  -c, --config=FILE         load a JSON-format configuration file
  -l, --log-file=FILE       log all output to a file
  -S, --syslog              use system log for output messages
      --nicehash            enable nicehash support
      --print-time=N        print hashrate report every N seconds
      --api-port=N          port for the miner API
      --api-access-token=T  access token for API
      --api-worker-id=ID    custom worker-id for API
  -h, --help                display this help and exit
  -V, --version             output version information and exit
```

Also you can use configuration via config file, default **config.json**. You can load multiple config files and combine it with command line options.

## Other information
* No HTTP support, only stratum protocol support.
* No TLS support.
* Default donation 5% (5 minutes in 100 minutes) can be reduced to 1% via command line option `--donate-level`.

## SHA256 for Windows Binary files
    200959dbed1f071379bf97ec6e097146f60c2b15ad4d09f1bcc4b89fd6fcaabe: certUtil -hashfile hycon-nvidia-win-0.0.1-without-mhttpd/xmrig-nvidia.exe sha256
    99de6d6b24595663e8bd0bb79af93baa17d5afec412a4b2620ad182355da78c2: certUtil -hashfile hycon-nvidia-win-0.0.1/xmrig-nvidia.exe sha256

## Contacts
* hycon@glosfer.com
* [site](https://www.hycon.io)
* [reddit](https://www.reddit.com/r/HYCON)
* [facebook](https://www.facebook.com/teamHycon)
* [instagram](https://www.instagram.com/teamhycon)
* [medium](https://www.medium.com/@teamhycon)
* [twitter](https://www.twitter.com/teamhycon)
