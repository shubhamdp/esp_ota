### Flash and RAM numbers

#### Environment
- Application: connectedhomeip/examples/lighting-app/esp32
- Target SoC: ESP32-C3
- esp-idf: [v5.1.1](https://github.com/espressif/esp-idf/tree/v5.1.1)
- connectedhomeip: [1ff7b63](https://github.com/project-chip/connectedhomeip/tree/181b0cb14f)

#### Static D/IRAM and Flash size

```
Total sizes:
Used stat D/IRAM:  175362 bytes ( 145934 remain, 54.6% used)
      .data size:   12964 bytes
      .bss  size:   78304 bytes
      .text size:   84094 bytes
Used Flash size : 1272270 bytes
           .text: 1044814 bytes
         .rodata:  224336 bytes
Total image size: 1369328 bytes (.bin may be padded larger)
```

<details>
  <summary>Per-archive contributions to ELF file:</summary>

```
            Archive File DRAM .data & 0.bss .eh_frame IRAM0 .text ram_st_total Flash .text & .rodata & .rodata_noload & .appdesc flash_total
               libCHIP.a        228   33318         0           0        33546      233268     42231                0          0      275727
               libmain.a        160   22394         0           0        22554      138382     23242                0          0      161784
         libmbedcrypto.a        120      88         0          96          304       72302     55348                0          0      127866
           libnet80211.a        931    7185         0        2728        10844       96122     10925             8145          0      110706
               liblwip.a         12    2602         0           0         2614       84830     14324                0          0       99166
                  libc.a        104      39         0           0          143       78988      5518                0          0       84610
                 libbt.a        277    5256         0        5232        10765       63598      8102                0          0       77209
           libbtdm_app.a        320     397         0       11838        12555       51206      7132                0          0       70496
                 libpp.a       2464    1166         0        6008         9638       38872      3306              100          0       50650
     libwpa_supplicant.a          8    1188         0           0         1196       43304      2038                0          0       45350
                libphy.a       1584     349         0        8074        10007       24566         0                0          0       34224
     libesp_hw_support.a        325     142         0        4614         5081       15008      3595                0          0       23542
             libdriver.a        187      29         0        1594         1810       15490      4367                0          0       21638
           libfreertos.a         96    2236         0       11854        14186         354      4853                0          0       17157
         libesp_system.a        181     138         0        1702         2021        7960      4845                0          0       14688
          libnvs_flash.a          0      24         0           0           24       13508       128                0          0       13636
          libspi_flash.a       2050      18         0        8448        10516         920      1546                0          0       12964
               libheap.a          4       8         0        5162         5174        3480      3234                0          0       11880
                libhal.a        947       8         0        6038         6993        4306       334                0          0       11625
                libvfs.a        304      64         0           0          368        8354       933                0          0        9591
          libesp_netif.a          4      25         0           0           29        6528      2347                0          0        8879
            libconsole.a         13      52         0           0           65        8024       324                0          0        8361
         libesp_common.a          0       0         0           0            0          50      7736                0          0        7786
             libstdc++.a         12      69      2860           0           81        3668       998                0          0        7538
        libesp_ringbuf.a          0       0         0        4338         4338           0      2270                0          0        6608
           libesp_wifi.a        476      30         0         142          648        2768      1531                0          0        4917
            libcoexist.a       1356      66         0           0         1422        3256       265                0          0        4877
          libesp_event.a          0       4         0           0            4        3700      1017                0          0        4717
             libesp_mm.a          4      44         0         350          398        2236      1418                0          0        4008
             libnewlib.a        241     440         0        1948         2629        1184       340                0          0        3713
            libesp_phy.a          8      14         0         120          142        2092      1372                0          0        3592
          libesp_timer.a         16      36         0        1260         1312        1496       813                0          0        3585
               libbtbb.a          0       0         0           0            0        2598        61                0          0        2659
              libefuse.a         76       4         0           0           80        1376      1033                0          0        2485
           libmbedx509.a          0       0         0           0            0        1794       610                0          0        2404
      libesp_partition.a          0       8         0           0            8        1724       511                0          0        2235
            libpthread.a          0      12         0         268          280        1014       468                0          0        1750
libespressif__esp_diagno          0      16         0           0           16        1462         5                0          0        1467
                libcxx.a          0      16         0           0           16         942       396                0          0        1338
                liblog.a          8     272         0         284          564         846       142                0          0        1280
libespressif__led_strip.          0      16         0         162          178         658       398                0          0        1218
              libriscv.a          0     256         0         678          934         154       171                0          0        1003
                libgcc.a          0       0         0           0            0         970         0                0          0         970
 libbootloader_support.a          0       0         0         606          606          36       167                0          0         809
                  libm.a          0       0         0           0            0         706         8                0          0         714
                libsoc.a          0       0         0         194          194           0       304                0          0         498
     libesp_app_format.a          1       8         0         158          167          22         4                0        256         441
               libcore.a          0       9         0           0            9         318        48                0          0         366
         libapp_update.a          0       4         0           0            4         180       125                0          0         305
           libesp_coex.a         72       0         0          74          146         114         0                0          0         260
            libesp_rom.a          0       0         0         122          122           0         0                0          0         122
               libmesh.a          0       4         0           0            4          64         0                0          0          64
```

</details>

#### Heap Numbers

| Events                     | Free heap | Largest Free Block | Min. Ever Free Size |
|----------------------------|-----------|--------------------|---------------------|
| Before Server Init         | 204280    | 180224             | 203764              |
| Commissionable mode for F1 | 74784     | 55296              | 73264               |
| Commissioned in F1         | 137224    | 51200              | 47404               |
| One wildcard subscription  | 137224    | 51200              | 46184               |
| Commissionable mode for F2 | 136476    | 51200              | 46184               |
| Commissioned in F2         | 136064    | 51200              | 46184               |
| Two wildcard subscription  | 136060    | 51200              | 46184               |

