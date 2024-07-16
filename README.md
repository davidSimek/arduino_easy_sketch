<a id="readme-top"></a>

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/github_username/repo_name">
    <img src="images/logo_w_bg.png" alt="Logo" width="300" height="300">
  </a>

<h3 align="center">Arduino easy sketch</h3>

  <p align="center">
    Arduino C++ development workflow/kickstart for Linux.
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About The Project

I started to learn Arduino because I know C pretty well and saw a lot of demand on embeded C developer jobs.

What I didn't like was using ArduinoIDE. I know it is best way to program arduino for most people, but I like to do my work in neovim. As I started to create my project, adapting it for lsp to correctly understand, installing libraries and so on, I realized this might get useful for more people than just me.

So this project tries to make it easy for you to create Arduino project, edit it and compile it. Loading it into physical arduino is your job. It is mainly tested in neovim, but vscode or whatever you use should be able to work with this in the same way, if it uses lsp. I am personally using Void Linux, so I am primarely developing it for it, but I am trying to make it work on most major distributions.

To test it, I use SimulIDE. It is free circuit simulator which lets you simulate Arduino and many more boards.

 > **Note:** If you know some bash and your package manager, you will be able to use this even if your distro is not supported by this repo)

<p align="right">(<a href="#readme-top">back to top</a>)</p>


### Built With

[Arduino CLI](https://arduino.github.io/arduino-cli/1.0/)

[SimulIDE](https://simulide.com/p/)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- GETTING STARTED -->
## Getting Started

Intro text

### Prerequisites
#### packages you have to have on different distributions

| Arduino Type                     | Void Linux (xbps)                               | Arch Linux              |
|:--------------------------------:|:-----------------------------------------------:|:-----------------------:|
| Arduino Uno R3                   | arduino-cli<br>avr-gcc<br>avr-libc              | unsupported             |
| Arduino Uno R3 SMD               | arduino-cli<br>avr-gcc<br>avr-libc              | unsupported             |
| Arduino Mega 2560 Rev3           | arduino-cli<br>avr-gcc<br>avr-libc              | unsupported             |
| Arduino Nano (classic)           | arduino-cli<br>avr-gcc<br>avr-libc              | unsupported             |
| Arduino Micro                    | arduino-cli<br>avr-gcc<br>avr-libc              | unsupported             |
| Arduino Leonardo                 | arduino-cli<br>avr-gcc<br>avr-libc              | unsupported             |
| Arduino Uno Mini Limited Edition | arduino-cli<br>avr-gcc<br>avr-libc              | unsupported             |

### Installation

1. Clone or download this repository
```bash
git clone https://github.com/davidSimek/arduino_easy_sketch.git
```
or

<img src="images/download.png" alt="Logo" width="710" height="300">

2. Make libraries visible
  Depending on your distribution and board, add one of these commands into your shell configuration file (.bashrc or .config/fish/config.fish or ...)

`export CPLUS_INCLUDE_PATH=/usr/avr/include:/home/void/.arduino15/packages/arduino/hardware/avr/1.8.6/cores/arduino:/home/void/.arduino15/packages/arduino/hardware/avr/1.8.6/variants/standard:/home/void/Arduino/libraries`

| Arduino Type                     | Void Linux (xbps)                               | Arch Linux              |
|:--------------------------------:|:-----------------------------------------------:|:-----------------------:|
| Arduino&nbsp;Uno &nbsp;R3<br>Arduino&nbsp;Uno&nbsp;R3&nbsp;SMD<br>Arduino&nbsp;Mega&nbsp;2560&nbsp;Rev3<br>Arduino&nbsp;Namo&nbsp;(classic)<br>Arduino&nbsp;Micro<br>Arduino&nbsp;Leonardo<br>Arduino&nbsp;Uno&nbsp;Mini&nbsp;Limited&nbsp;Edition                     | `export CPLUS_INCLUDE_PATH=/usr/avr/include:/home/<username>/.arduino15/packages/arduino/hardware/avr/<version>/cores/arduino:/home/<username>/.arduino15/packages/arduino/hardware/avr/<version>/variants/standard:/home/<username>/Arduino/libraries` | unsupported |

 > **Note:** You have to change \<username> and \<version>. Username is you user name on linux, and version is version of avr or other library installed.

<p align="right">(<a href="#readme-top">back to top</a>)</p>


## Usage

TUTORIAL HERE

_For more examples, please refer to the [Documentation](https://example.com)_

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Roadmap

- [x] Void Linux + Arduino Uno
- [ ] finish README.md and other repo stuff
- [ ] add support for
    - [ ] Arch linux
    - [ ] Ubuntu
    - [ ] Debian

See the [open issues](https://github.com/github_username/repo_name/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- LICENSE -->
## License

<!-- Distributed under the MIT License. See `LICENSE.txt` for more information. -->

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Contact

Your Name - [@twitter_handle](https://twitter.com/twitter_handle) - email@email_client.com

Project Link: [https://github.com/github_username/repo_name](https://github.com/github_username/repo_name)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

[contributors-shield]: https://img.shields.io/github/contributors/github_username/repo_name.svg?style=for-the-badge
[contributors-url]: https://github.com/github_username/repo_name/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/github_username/repo_name.svg?style=for-the-badge
[forks-url]: https://github.com/github_username/repo_name/network/members
[stars-shield]: https://img.shields.io/github/stars/github_username/repo_name.svg?style=for-the-badge
[stars-url]: https://github.com/github_username/repo_name/stargazers
[issues-shield]: https://img.shields.io/github/issues/github_username/repo_name.svg?style=for-the-badge
[issues-url]: https://github.com/github_username/repo_name/issues
[license-shield]: https://img.shields.io/github/license/github_username/repo_name.svg?style=for-the-badge
[license-url]: https://github.com/github_username/repo_name/blob/master/LICENSE.txt

this readme was made with [Best-README-Template](https://github.com/othneildrew/Best-README-Template)
