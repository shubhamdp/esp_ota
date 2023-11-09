### Flash and RAM numbers

#### Environment
- Application: esp-matter/examples/light
- Target SoC: ESP32-C3
- esp-idf: [v5.1.1](https://github.com/espressif/esp-idf/tree/v5.1.1)
- esp-matter: [1ff7b63](https://github.com/espressif/esp-matter/tree/1ff7b63)

#### Static D/IRAM and Flash size

```
Total sizes:
Used stat D/IRAM:  168636 bytes ( 152660 remain, 52.5% used)
      .data size:   12980 bytes
      .bss  size:   71152 bytes
      .text size:   84504 bytes
Used Flash size : 1350584 bytes
           .text: 1111312 bytes
         .rodata:  236152 bytes
Total image size: 1448068 bytes (.bin may be padded larger)
```

<details>
  <summary>Per-archive contributions to ELF file:</summary>

```
            Archive File DRAM .data & 0.bss .eh_frame IRAM0 .text ram_st_total Flash .text & .rodata & .rodata_noload & .appdesc flash_total
               libCHIP.a        228   22839         0           0        23067      261636     43550                0          0      305414
         libesp_matter.a        140   25250         0          14        25404      162890     26500                0          0      189544
         libmbedcrypto.a        120      88         0          96          304       72292     55348                0          0      127856
           libnet80211.a        931    7185         0        2728        10844       95958     10925             8145          0      110542
               liblwip.a         12    2602         0           0         2614       84830     14324                0          0       99166
                  libc.a        104      39         0           0          143       79026      5518                0          0       84648
                 libbt.a        277    5256         0        5232        10765       63598      8102                0          0       77209
           libbtdm_app.a        320     397         0       11838        12555       51206      7132                0          0       70496
                 libpp.a       2464    1166         0        6008         9638       38872      3306              100          0       50650
     libwpa_supplicant.a          8    1188         0           0         1196       43290      2038                0          0       45336
                libphy.a       1584     349         0        8262        10195       24878         0                0          0       34724
     libesp_hw_support.a        325     150         0        4614         5089       15282      3768                0          0       23989
             libdriver.a        187      29         0        1594         1810       17140      4691                0          0       23612
           libfreertos.a         96    2236         0       12062        14394         374      4868                0          0       17400
         libesp_system.a        181     138         0        1702         2021        8000      4845                0          0       14728
          libnvs_flash.a          0      24         0           0           24       13886       124                0          0       14010
          libspi_flash.a       2050      18         0        8448        10516         920      1546                0          0       12964
                libhal.a        947       8         0        6038         6993        4982       600                0          0       12567
               libheap.a          4       8         0        5162         5174        3500      3234                0          0       11900
                libvfs.a        304      64         0           0          368        8350       933                0          0        9587
          libesp_netif.a          4      25         0           0           29        6528      2347                0          0        8879
            libconsole.a         13      52         0           0           65        8024       324                0          0        8361
         libesp_common.a          0       0         0           0            0          50      7736                0          0        7786
             libstdc++.a         12      69      2860           0           81        3666       998                0          0        7536
        libesp_ringbuf.a          0       0         0        4338         4338           0      2270                0          0        6608
           libesp_wifi.a        476      30         0         142          648        2758      1531                0          0        4907
            libcoexist.a       1356      66         0           0         1422        3256       265                0          0        4877
          libesp_event.a          0       4         0           0            4        3744      1017                0          0        4761
            libesp_adc.a          0      22         0           0           22        2456      1675                0          0        4131
             libesp_mm.a          4      44         0         350          398        2236      1418                0          0        4008
  libespressif__button.a          0     179         0           0          179        2840      1060                0          0        3900
             libnewlib.a        241     440         0        1948         2629        1184       340                0          0        3713
            libesp_phy.a          8      14         0         120          142        2100      1372                0          0        3600
          libesp_timer.a         16      36         0        1260         1312        1500       813                0          0        3589
 libesp_matter_console.a          0     252         0           0          252        1686      1314                0          0        3000
              libefuse.a        108       4         0           0          112        1614      1201                0          0        2923
               libmain.a          0       2         0           0            2        1772      1014                0          0        2786
               libbtbb.a          0       0         0           0            0        2598        61                0          0        2659
           libmbedx509.a          0       0         0           0            0        1794       610                0          0        2404
      libesp_partition.a          0       8         0           0            8        1724       511                0          0        2235
         libled_driver.a          0       9         0           0            9        1094       801                0          0        1895
            libpthread.a          0      12         0         268          280        1014       468                0          0        1750
libespressif__esp_diagno          0      16         0           0           16        1468         5                0          0        1473
                libcxx.a          0      16         0           0           16         942       396                0          0        1338
                liblog.a          8     272         0         284          564         846       142                0          0        1280
libespressif__led_strip.          0      16         0         162          178         658       398                0          0        1218
              libriscv.a          0     256         0         678          934         154       171                0          0        1003
                libgcc.a          0       0         0           0            0         970         0                0          0         970
 libbootloader_support.a          0       0         0         606          606          36       167                0          0         809
                  libm.a          0       0         0           0            0         696         8                0          0         704
                libsoc.a          0       0         0         194          194           0       344                0          0         538
     libesp_app_format.a          1       8         0         158          167          22         4                0        256         441
          libapp_reset.a          0       1         0           0            1         236       197                0          0         433
               libcore.a          0       9         0           0            9         318        48                0          0         366
         libapp_update.a          0       4         0           0            4         180       125                0          0         305
           libesp_coex.a         72       0         0          74          146         114         0                0          0         260
            libesp_rom.a          0       0         0         122          122           0         0                0          0         122
               libmesh.a          0       4         0           0            4          64         0                0          0          64
             libdevice.a          0       0         0           0            0          44         0                0          0          44
```

</details>

#### Heap Numbers

| Events                     | Free heap | Largest Free Block | Min. Ever Free Size |
|----------------------------|-----------|--------------------|---------------------|
| Before data model create() | 210380    | 188416             | 210120              |
| Before esp_matter::start() | 197396    | 172032             | 172032              |
| Commissionable mode for F1 | 69680     | 51200              | 69496               |
| Commissioned in F1         | 132072    | 53248              | 42860               |
| One wildcard subscription  | 132072    | 53248              | 38416               |
| Commissionable mode for F2 | 131352    | 53248              | 38416               |
| Commissioned in F2         | 130964    | 53248              | 38416               |
| Two wildcard subscription  | 130964    | 53248              | 38416               |

