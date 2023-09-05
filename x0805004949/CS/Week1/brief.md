

## 컴퓨터 구조 



컴퓨터에 대해 공부한다고 하면 크게 두 가지로 나눌 수 있다 . 

컴퓨터 공부 
- 1. 컴퓨터가 이해 할 수 있는 정보 
	- 데이터 
	- 명령어 
- 2. 컴퓨터의 핵심부품(하드웨어)
	- CPU 
	- 메모리(주기억장치)
	- 보조기억장치
	- 입출력장치(I/O)
	- 시스템버스 



컴퓨터 == "데이터가 들어있는 명령어를 처리하는 기계!"

이떄 컴퓨터의 핵심부품들이 연결되어 데이터를 주고 받아야하는데 이때 이 핵심부품을 이어주는것이 마더보드(=브레드보드, aka 빵판)이고 이 부품들 사이로 오가는 데이터의 통로를 시트템 버스라고한다.

- 메모리
	- 현재 실행되는 프로그램, 명령어, 데이터가 저장되어 있는 부품 
	- 프로그램, 명령어, 데이터등이 메모리에 저장될 때 주소가 부여되어 나중에 다시 찾을 수 있다!
	- Main memory consists of a sequence of locations. These locations are numbered, and the sequence number of a location is called its address. An address provides a way of picking out one particular piece of information from among the millions stored in memory(= 메인메모리는 연속적인 위치로 되어있는데 이 위치에는 번호가 매겨져있고 이에 대한 시퀀스 번호를 주소라고 한다. 주소는 메모리에 저장된 수백만개의 정보중에 특정 정보를 골라낼 수 있도록 도와준다. )
	- 주메모리는 휘발성이므로 컴퓨터가 종료되면 주메모리에 있던 데이터는 사라진다
	- 특징(출처:https://www.geeksforgeeks.org/computer-memory/)
		- 주메모리가 보조메모리보다 빠르다
		- 반도체메모리다
		- 주메모리는 보통 휘발성이다
		- 컴퓨터 시스템은 주메모리없이 실행될 수 없다 

```ad-question
title: 주메모리가 보조메모리보다 빠르다고 할 때 이는 cpu에 로드되는 속도때문에 처리속도가 빠르다는거겠지?
```

## 운영체제
- CPU 
	- 메모리에 저장된 명령어를 읽고, 해석하고, 실행하는 부품 
	- CPU의 내부 
		- 레지스터: CPU 내부에 있는 작은 기억장치
		- ALU(계산기) 
		- 제어장치: 컴퓨터 부품을 관리하고 작동시키기 위해  컴퓨터 신호를 보내고 명령어를 해석하는장치. 이때 컴퓨터 신호의 예로는 메모리에 있는 데이터를 읽을 때 보는 메모리 읽기 신호나 메모리에 데이터를 작성할 때 보내는 쓰기 신호등이 될 수 있다 
	- CPU와 메모리의 관계
		- 
- 보조기억장치 
	- magnetic tapes, magnetic disks
	- 보조기억장치 성격(출처:https://www.geeksforgeeks.org/computer-memory/)
		- 보조기억장치에 저장된 프로그램들은 처리속도가 느리지만 다시 사용가능하다
		- 컴퓨터가 꺼져도 데이터가 남아있다
		- 주메모리보다 저렴하다
		- 용량이 크다
		- 보조기억장치가 없어도 컴퓨터 시스템은 실행된다(주기억장치가 없으면 실행되지 않지만)
- 입출력장치
- 시스템버스: 컴퓨터의 주요부품사이에서 데이터를 연결하는 통로
	- 주소버스: 주소 주고 받는 통로 
	- 데이터버스: 데이터, 명령어 주고 받는 통로
	- 제어버스: 제어신호를 주고 받는 통로 


- 프로그램  :  컴퓨터가 기계적으로 따라야하는 명령어 리스트(A program is simply a list of unambiguous instructions meant to be followed mechanically by a computer)
- 컴퓨터는 기계어(machine language)라고 불리는 아주 심플한 언어로 작성된 명령어를 실행하기위해 제작되었다! 즉 명령어를 처리하는 기계!
- CPU가 프로그램을 실행하면 보조기억장치에서 주기억장치(메모리)로 로드가 된다. 다양한 타입의 메모리와 스토리지가 있는데 보통 SSD에서 RAM으로 로드되는게 그 예가 될 수 있다. 주기억장치가 더 접근이 빠르기 때문에 열려있는 소프트웨어는 컴퓨터의 👉프로세서👈에 더 빠르게 연결될 수 있다!
- CPU는 메모리(주 기억장치)에 기계어로 작성된 명령어를 실행하는데 이 작업은
	- 메모리로부터 데이터를 읽겠다는 제어신호를 제어버스를 통해 메모리 보내고  + 읽고자 하는 주소를 주소버스를 통해 메모리로 보내고 
	- 메모리에서는 해당 주소지에 있는 명령어를 데이터버스로 통해 CPU에 보내고 
	- 해당 명령어를 CPU는 레지스터에 저장하고 레지스터에 저장된 명령어를 제어신호가 해석한다!


```ad-question
title: 왜 보조기억장치에서 주기억장치로 로드되지? 주기억장치에서 로드 되면 장점이 뭐지?
```




## 운영체제 서비스(OS service)




![](https://i.imgur.com/2gPnccE.png)


이미지 및 내용 출처: https://www.cs.uic.edu/~jbell/CourseNotes/OperatingSystems/images/Chapter2/2_01_OS_Services.jpg

https://www.cs.uic.edu/~jbell/CourseNotes/OperatingSystems/2_Structures.html
- **User Interfaces** - Means by which users can issue commands to the system. Depending on the system these may be a command-line interface ( e.g. sh, csh, ksh, tcsh, etc. ), a GUI interface ( e.g. Windows, X-Windows, KDE, Gnome, etc. ), or a batch command systems. The latter are generally older systems using punch cards of job-control language, JCL, but may still be used today for specialty systems designed for a single purpose.
- **Program Execution** - The OS must be able to load a program into RAM, run the program, and terminate the program, either normally or abnormally.
- **I/O Operations** - The OS is responsible for transferring data to and from I/O devices, including keyboards, terminals, printers, and storage devices.
- **File-System Manipulation** - In addition to raw data storage, the OS is also responsible for maintaining directory and subdirectory structures, mapping file names to specific blocks of data storage, and providing tools for navigating and utilizing the file system.

```ad-note
title: file-system manipulation

> ref https://www.tutorialspoint.com/operating_system/os_services.htm 


A file represents a collection of related information.
Computers can store files on the disk (secondary storage), for long-term storage purpose.
Examples of storage media include magnetic tape, magnetic disk and optical disk drives like CD, DVD.
Each of these media has its own properties like speed, capacity, data transfer rate and data access methods.

A file system is normally organized into directories for easy navigation and usage. 
These directories may contain files and other directions. 
Following are the major activities of an operating system with respect to file management −

    - Program needs to read a file or write a file.
    - The operating system gives the permission to the program for operation on file.
    - Permission varies from read-only, read-write, denied and so on.
    - Operating System provides an interface to the user to create/delete files.
    - Operating System provides an interface to the user to create/delete directories.
    - Operating System provides an interface to create the backup of file system.

```

- **Communications** - Inter-process communications, IPC, either between processes running on the same processor, or between processes running on separate processors or separate machines. May be implemented as either shared memory or message passing, ( or some systems may offer both. )
- **Error Detection** - Both hardware and software errors must be detected and handled appropriately, with a minimum of harmful repercussions. Some systems may include complex error avoidance or recovery systems, including backups, RAID drives, and other redundant systems. Debugging and diagnostic tools aid users and administrators in tracing down the cause of problems.


**UI 제공(사용자 인터페이스)** -  OS는 유저들이 시스템에 명령어를 내릴 수 있는 UI를 제공한다.
**프로그램 실행** - OS는 반드시 프로그램을 RAM에 로드하고, 프로그램을 실행하고, 정상 또는 비정상적으로 종료시킬 수 있다.
**입출력 작업(I/O)** - 키보드, 터미널, 프린터, 저장 장치등의 입출력장치로부터 데이터를 옮기는 책임을 갖고 있다

**통신** - 프로세스간의 통신, IPC, 같은 👉프로세서👈내에 있는 프로세스 끼리의 통신, 혹은 별개의 분리된 👉프로세서나 머신👈내에 있는 프로세스 간의 통신
**오류 감지** - 디버깅 과 오류 진단 도구를 제공한다. 오류가 생기면 이를 감지고하고, 오류에 대한 영향을 하드웨어나 소프트웨어 모두 최소한으로 받도록 한다.
**리소스 할당** - CPU 주기, 메인 메모리, 저장공간, 주변장치를 프로그램이 효율적으로 사용할 수 있도록 관리한다. 
Accounting - 시스템 활동, 자원 사용량등 향후에 성능을 최적화 할 수 있는 통계기록 리소스 사용량을 추적한다(작업관리자)
**보호 및 보안** - 잘못된 내부 프로세스나 외부 침입자로부터 시스템과 리소스에 문제가 생기지 않도록 접근을 통제하고 보안 수준이 높은 운영체제의 경우 모든 프로세스의 상세로그를 기록해 지울 수 없는 영구매체에 장기간 보관하도록 규정하고 있다. 

**파일 시스템 조작** - 

파일은 관련 정보의 집합을 나타냅니다. 컴퓨터는 장기 보관을 위해 디스크(보조 저장소)에 파일을 저장할 수 있습니다. 저장 매체의 예로는 자기 테이프, 자기 디스크 및 CD, DVD와 같은 광 디스크 드라이브가 있습니다. 이러한 각 미디어에는 속도, 용량, 데이터 전송 속도 및 데이터 액세스 방법과 같은 고유한 속성이 있습니다.

파일 시스템은 일반적으로 쉽게 탐색하고 사용할 수 있는 디렉터리 구조로 구성되어있음.
이런 디렉토리에는 파일 및 다른 디렉토리 등이 있을 수 있다.
파일 관리와 관련되어 OS의 역할은 다음과 같다
- 사용자가 파일이나 디렉터리를 생성/삭제 할 수 있는 UI 제공
- 프로그램이 실행되려면 파일을 읽거나 써야하는데 운영체제는 파일에 대한 작업 권한을 부여한다 따라서 프로그램에게 파일을 읽고쓰고생성삭제수정접근허가등을 준다 


## 운영체제 - 역할


- 하드웨어 인터페이스 제공
- 사용자 인터페이스 제공 
- 자원보호 
- 자원관리 


## 운영체제 - 스토리지

```ad-question
title: 컴퓨터 동작 중심이 왜 메모리지? 

출처: https://sudo-minz.tistory.com/2

CPU가 일을 하려면 명령어와 데이터가 CPU로 전달되어야하는데 이러한 것들의 일부는 파일에 보조기억장치에 해당되는 하드디스크에 담겨있다.하드디스크에서 CPU까지 전달되려면 데이터버스를 타야하는데 상대적으로 느리다.
따라서 이 주기억장치 램은 일정량의 데이터를 하드디스크에서 복사해 필요시마다 CPU에 전달한다. 
프로그램의 일부를 올리는데 메모리는 한정되어 있어서 프로그램 일부가 올라간다. (=메모리는 CPU가 하고자하는 일을 임시저장).


보조메모리에 있는 데이터는 CPU가 처리하는 속도가 메모리보다 느리다
따라서 메모리에 CPU의 할 일을 넣어두면 CPU에게 일을 바로 줄수가 있다

여기서 중요한건
CPU가 일을 얼마나 빨리 처리하느냐도 중요하지만 
옆에서 할일을 얼마나 잘 대기 시켜주느냐도 중요하다!

일 쌓는 임시창고가크다고 일처리가 빠른거는 아니지만 전체 컴퓨터의 성능을 미치긴한다!

일처리를 빨리해야한다면 CPu의 성능이 중요하지만 메모리 성능이 좋아지면 많은 양의 데이터를 
한꺼번에 메모리에 올려 일처리를 할 수도 있다. 대표적인거라면 게임! 


```

- 운영체제 = 자원을 관리하는 `특별한 프로그램
- 운영체제 = <mark style="background: #FF5582A6;">실행중인 프로그램(=프로세스)</mark>  를 관리하는 특별한 프로그램
- 운영체제를 왜 특별한 프로그램이라고 할까?
	- 운영체제는 실행중인 프로그램이기 떄문에 다른 여타 프로그램과 마찬가지로 메모리(=주기억장치)에 저장되어 있다!
	- 하지만 다른 프로그램들과 달리 주기억장치(=메모리)에서 `커널영역`에 저장되어있다! 일번적인 프로그램들은 `사용자 영역`에 저장되어있음에도 불구하고!
- CPU = 메모리에 올라와 있는 프로그램의 명령어를 실행 할 뿐! 
- 프로그램을 실행할려고 클릭하려고 하면 이 실행 전의 프로그램은 보조 메모리에 저장되어있다 하지만 실행 시키면 보조메모리에서 주메모리로 로드가 되고 이 주메모리에 올라온 실행중인 프로그램은 CPU가 처리한다.
![메모리계층](https://media.geeksforgeeks.org/wp-content/uploads/20230609020524/Memory-Hierarchy-Design-768.png)

이미지 출처 : https://www.geeksforgeeks.org/memory-hierarchy-design-and-its-characteristics/

메모리계층(출처:https://www.codingninjas.com/studio/library/memory-hierarchy)

메모리 계층 구조는 액세스 속도에 따라 컴퓨팅 시스템에서 다양한 유형의 스토리지를 배열하는 것입니다. 응답 시간에 따라 컴퓨터 스토리지를 구성합니다. 응답 시간, 복잡성, 용량이 모두 연결되어 있기 때문에 성능과 제어 기술에 따라 계층을 구분할 수도 있습니다.

위 그림과 같이 컴퓨터 메모리는 피라미드와 같은 구조를 가지고 있습니다. 이는 다양한 수준의 메모리를 설명하는 데 사용됩니다. 계층 구조에 따라 컴퓨터 스토리지를 분리합니다.

보시다시피 용량은 시간이 지남에 따라 증가하고 있습니다. 이 메모리 계층 구조 설계는 두 가지 유형으로 나뉩니다:

- 기본 또는 내부 메모리
    CPU 레지스터, 캐시 메모리, 주 메모리로 구성되며<mark style="background: #FFF3A3A6;"> CPU 프로세서가 직접 액세스 할 수 있습니다</mark>.기본 메모리라고도 합니다. 내부 메모리는 컴퓨터가 실행 중일 때 빠르게 액세스해야 하는 소량의 데이터를 저장할 수 있는 컴퓨터의 일부입니다. 이 유형의 메모리는 프로세스가 I/O 모듈을 통해 직접 액세스할 수 있습니다. RAM, ROM 및 캐시 메모리로 구성됩니다. <mark style="background: #FFF3A3A6;">휘발성</mark>
     - 레지스터
     - 캐시
     - 주메모리
- 보조 또는 외부 메모리
    자기 디스크, 광 디스크, 자기 테이프로 구성되며 프로세서가 I/O 모듈을 통해 액세스할 수 있습니다.보조 메모리라고도 합니다. 용량이 크기 때문에 방대한 데이터를 저장합니다. 현재 수백 메가바이트 또는 기가바이트 단위로 데이터를 측정할 수 있습니다. 외장 메모리의 중요한 특성은 컴<mark style="background: #FFF3A3A6;">퓨터가 꺼져도 저장된 정보가 손실되지 않는다는 것입니다</mark>. 자기 테이프, 자기 디스크, 광 디스크로 구성됩니다.
	- magnetic disk
	- optical disk
	- magnetic tape




## 운영체제 - 캐싱

왜 캐시계층이 필요함?
보조기억장치->주기억장치->CPU에서 처리하는데 왜 주기억장치와 CPU사이에 캐싱 계층이 필요한가?https://velog.io/@eddy_song/memory-hierarchy

https://www.codingninjas.com/studio/library/memory-hierarchy

The memory hierarchy is used in computer systems to optimize the usage of available memory resources. The hierarchy is composed of different levels of memory, each with varying speed, size, and cost. The lower levels, such as registers and caches, have faster access times but are limited in capacity and more expensive, while the higher levels, such as main memory and secondary storage, have larger capacities but are slower and less expensive. By storing frequently accessed data in faster and smaller memory levels and less frequently accessed data in slower but larger memory levels, memory hierarchy ensures efficient data access, reduces processing time, and enhances overall system performance.

메모리 계층 구조는 컴퓨터 시스템에서 사용 가능한 메모리 리소스의 사용을 최적화하는 데 사용됩니다. 계층 구조는 속도, 크기, 비용이 각각 다른 여러 수준의 메모리로 구성됩니다. 레지스터 및 캐시와 같은 하위 수준은 액세스 시간이 빠르지만 용량이 제한되고 비용이 많이 드는 반면, 주 메모리 및 보조 스토리지와 같은 상위 수준은 용량은 더 크지만 속도가 느리고 비용이 저렴합니다. 메모리 계층 구조는 자주 액세스하는 데이터는 더 빠르고 작은 메모리 레벨에 저장하고 덜 자주 액세스하는 데이터는 느리지만 더 큰 메모리 레벨에 저장함으로써 효율적인 데이터 액세스를 보장하고 처리 시간을 단축하며 전반적인 시스템 성능을 향상시킵니다.


사용자 입장에서는 일처리가 빠른게 좋다
따라서 성능좋은 CPU와 메모리가 좋겠지!
하지만 속도를 높이자니 레지스터처럼 용량이 너무 부족해지고
용량을 늘리면 하드디스크처럼 느려지는 단점이 발생하기 위해 만든게 메모리구조..
차라리 자주 쓰는 명령어들을 저장해두자..왜냐면 할일을 자꾸 로드해올때 병목현상이 생기니까..

![](https://i.imgur.com/CQLG8vI.png)
출처:https://nayoungs.tistory.com/entry/%EC%9A%B4%EC%98%81%EC%B2%B4%EC%A0%9C-%EB%A9%94%EB%AA%A8%EB%A6%AC-%EA%B3%84%EC%B8%B5-%EA%B5%AC%EC%A1%B0Memory-Hierachy 




## 운영체제 - OS 구조

- 멀티프로그래밍
- 멀티프로세싱
- 멀티태스킹 
## 운영체제 - 시스템콜과 dual mode 

운영체제의 구조는 다음과 같다



| 유저프로그램 |
| ------------ |
| GUI(OS)          |
| 시스템콜(OS)     |
| 커널(OS)         |
| 드라이버(OS)     |
| 하드웨어     |


유저프로그램이 가장 그 위에 있고 GUI-시스템콜-커널-드라이버, 맨 마지막에 HW가 있다
GUI, 시스템콜, 커널, 드라이버 부분이 운영체제를 지칭한다

- 시스템콜?
	- 유저 프로그램이 컴퓨터자원에 직접 겁근하는걸 차단할 수 있고 프로그램을 다른 프로그램으로부터 보호할 수 있다. 자원들을 보호 할 요소가 필요하는데 OS는 시스템콜이라는 기능으로 수행. 으용 프로그램이 하드디스크에 저장해달라고 해도 직접적으로 프로그램이 리소스에 접근하는게 아니라 OS 통해 접근해야한다
	- 운영체제가 커널에 접근하기 위한 인터페이스로 유저 프로그램이 운영체제 서비스 받기 위해 커널수 호출 할 떄 사용
	- 예를들면 유저프로그램이 I/O 요청으로 트랩을 발동하면 올바른 I/O 요청인지 확인한 후 유저모드가 시스템콜을 통해 커널모드로 변환되어 실행된다. (트랩 = a signal raised from a user program that indicates the  OS to perform on some functionally imeediately 반면 인터럽트는 a signal to the processor emitted by hardware indicating an event that needs immediate attention ) -> 예를들어 I/O 요청이 fs.readFile()이라는 파일 시스템의 파일 읽는 함수가 발동했다고하면  이때 유저모드에서 파일을 읽지않고 커널모드로 들어가 파일을 읽고 다시 유저 모드로 돌아가 그 뒤에 있는 유저 프로그램 로직 수행 -> 이과정 통해 컴퓨터 자원에 대한 직접 적근 차단할 수 있고 프로그램을 다른 프로그램으로부터 보호가능!
	- 시스템콜은 하나의 추상화 계층이로 이를 통해 네트워크 통신이나 데이터베이스와 같은 단계의 영역처리에 대한 부분을 많이 신경쓰지 않고 프로그램 구현할 수 있다!


- 듀얼모드(=이중동작모드)
	- 운영체제 보호하기 위한 기법. 사용자와 OS는 시스템 자원 공유하는데 그렇기에 사용자 제한 두지 않으면 사용자가 메모리 내 운영체제 자원을 망가뜨릴 수 있다 따라서 보호장치가 필수 이러한 보호장치를 듀어몰드라고 한다 
		- 시스템콜이 작동될때 modebit 참고하는데 이는 1,0 값 가지는 플래그 변수로 이로 유저모드와 커널 모드 구분한다. (0이 커널모드, 1이 유저모드)

![](https://i.imgur.com/QQOxKPP.png)



![](https://i.imgur.com/OH1Sw5c.png)



## 운영체제 - 인터럽트


![](https://i.imgur.com/oiZ1zWV.png)

인터럽트
- 어떤 신호가 들어왔을떄 cpu 잠깐 정시기키는것
- 키보드 마우스등 I/O 디바시으로 ㅇ니한 인터럽트, 0으로 숫자 나눈 산술연산에서 인터럽트, 프로세스 오류등으로 나타남
- 인터럽트 발생시 인터럽트 발생 함수가 모여 있는 인터럽트 벡터로 가서 인터럽트 핸들러 함수가 실행됨
- 인터럽트간의 우선순위가 있고 우선수위에 따라 실행되며
- 인터럽트는 하드웨어 인터럽트 소프트웨ㅓ 인터럽트로 ㅏ니뉨
	- 하드웨어 인터럽트 : 키보드 연결한다능 IO 디바이스에서 발생하는 인터럽트. 이때 인터럽트 라인 설계된 이후 순차적인 인터럽트 실행 중지하고 운영체제에 시스템콜 요청해 원하는 디바이스로 향해 디바이스에 있는 작은 로컬 버퍼에 접근해 일 수행
	- 소프트웨어 인터럽트 : 트랩, 프로세스 오류등 프로세스가 시스템 콜 호출시 발동 
- 
인터럽트와 트랩 
https://pediaa.com/difference-between-trap-and-interrupt/


## 운영체제 - 프로세스 관리


프로세스
- 컴퓨터에서 실행되고 있는 프로그램
- CPU 스케줄링의 대상이 되는 작업 
- 프로그램이 메모리에 올라가 인스턴스화 된 것
- 크롬과 같은 프로그램 chrome.exe 가 실행 파일이고 이를 두 번 실행하면 구글 크롬 프로세스가 변환되는 것이다 프로세스로
- 

프로세스 하나당 스레드 하나 존재 


![](https://i.imgur.com/DktUloI.png)


프로그램이 프로세스가 되면 일어나는 변화
메모리는 아래와 같이 생김
- 프로세스가 필요로하는 것들이 메모리에 올라감
- 해당 프로세스에 대한 정보를 담고 있는 pcb 블록이 프로세스 생성시 생성(프로세스 준비상태, pid,)
![](https://i.imgur.com/BIqIYfy.png)


사람들은 프로그램을 동시에 사용하고 싶어서 여러개의 프로그램을 켜둔다 그런데 한 프로세스 실행되기위해 cpu 점유하고 잇으면 다른 프로세스는 실행상태일수가업음. vscode켯다가 카톡끄면 꺼짐

![](https://i.imgur.com/WUOfX6f.png)

경량화된 프렛스 버전인 스레드
왜?
- 하나의 프로세스 안에 여러개의 스레드가 있을 때 공유되는 자원이 잇는데 여기서 스레드는 코드, 데이텉, 힙영역을 공통된 자원으로 사용함. 각 스레드는 스택만 다 따로 가지고 잇음1  고ㅓㅇ유되는 자원이 잇어서 컨텍스트 스위칭 일어날 때 캐싱적중률이 올라간다 (회의예약하는 경우 모니터 스피커 리모콘을 가져와서 사용하고 잇다가 이거를 다 들고 나가는게 아니라 ㅏ음사람이 쓸수잇게 걍 나둠 움직일 때 다른 팀이 들고다닐 필요가업다!)


멀티프로세스와 멀티스레드
- 처리방식의 일종
- 한 어플리케이션에 대해 다른 처리방식

![](https://i.imgur.com/3l8cyLW.png)
ㅜ 



## 운영체제 - 컨텍스트 스위칭

https://youtu.be/QmtYKZC0lMU





## 운영체제 - 
