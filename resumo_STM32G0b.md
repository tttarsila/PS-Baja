## Datasheet STM32G0B1xB/xC/xE – Microcontrolador STM32

O microcontrolador STM32G0B1xB/xC/xE, da linha STM32 da STMicroelectronics, é um MCU 32-bit com núcleo Arm Cortex-M0+, projetado para aplicações embarcadas que exigem integração e baixo consumo de energia. 

### Características Elétricas Principais:
#### Alimentação:
- **Tensão de operação (VDD):** 1,7 V até 3,6 V;
- **Alimentação analógica (VDDA):** Igual ao VDD (1,62 V min. para ADC/COMP, 1,8 V min. para DAC e 2,4 V min. para buffer de referência);
- **VBAT:** Suporta alimentação para RTC/bkp de 1,55 V a 3,6 V. Permite manter relógio e registradores de backup mesmo sem alimentação principal;
- **VDDIO2:** Pode ser 1,65 V a 3,6 V para alguns I/Os, elencando flexibilidade com tensões de entrada/saída.

#### Consumo de Corrente:
- **Modo normal (RUN):** Corrente típica entre 2 a 3 mA (16 MHz). Baixo consumo mesmo em alta velocidade devido à eficiência;
- **Modos de baixo consumo:** Diversos modos como Sleep, Stop (0 e 1), Standby e Shutdown, com consumo variando de microssegundos (Sleep) até nanoampères (Shutdown/VBAT);
- **Retenção de dados em Standby:** Consumo na faixa de 0,1 a 4 μA.

#### Capacidade de I/O:
- **Corrente máxima no pino:** 15–20 mA;
- **Corrente total I/O:** Até 80 mA (soma dos pinos);
- **Pinos tolerantes a 5V:** Diversos, permitindo compatibilidade com o ambiente industrial;
- **Até 94 pinos de I/O:** Dependendo do encapsulamento.

#### Memórias:
- **Flash:** Até 512 KB com proteção configurável (leitura, gravação, execução);
- **SRAM:** 144 KB no total (128 KB com checagem por paridade, útil para aplicações críticas de segurança);
- **Retenção em modos de baixo consumo:** Possível manter dados mesmo após Standby (conforme a configuração).

### Funções e Recursos

#### Núcleo:
- **Núcleo Arm Cortex-M0+:** 32 bits, até 64 MHz, pipeline de 2 estágios, tendo foco em eficiência energética;
- **MPU (Unidade de Proteção de Memória):** Protege áreas sensíveis.

#### Periféricos Integrados:
- **ADC:** 1 canal de 12 bits (até 2,5 MSPS), até 19 canais de entrada, watchdog analógico e trigger por timer;
- **DAC:** 2 canais de 12 bits, sample-and-hold, saída analógica estável para geração de sinais;
- **Comparadores:** 3, entradas programáveis, pode acordar o MCU a partir de trigger analógico;
- **Timers:** 15 no total, incluindo PWM avançado, general purpose, watchdogs e timers de baixa potência;
- **DMA:** 12 canais, possibilita transferências periférico-memória, reduzindo processamento da CPU.

#### Comunicação:
- **I2C:** 3 interfaces, até 1 Mbit/s, suporte SMBus/PMBus, filtro analógico de ruído, réveil em modos STOP;
- **USART:** 6 canais, multiprotocolo;
- **UART de baixa potência (LPUART):** 2 interfaces independentes do clock principal, mantém comunicação em modos Stop;
- **SPI:** 3 interfaces (até 32 Mbit/s), suporte a I2S para áudio digital;
- **USB FS:** Host e device, operação full-speed (12 Mbit/s);
- **CAN FD:** 2 controladores, suporte a aplicações automotivas/industriais;
- **HDMI-CEC:** 1 interface.

#### Recursos Adicionais:
- **RTC:** Relógio de tempo real, wake-up e retenção por VBAT;
- **CRC:** Unidade de cálculo CRC integrada;
- **Proteções:** Power-on Reset (POR), Power-down Reset (PDR), Brownout Reset (BOR), detector programável de tensão (PVD), ECC para Flash;
- **Identificador único:** 96 bits para rastreamento e autenticação de dispositivo.

Ao aplicar o microcontrolador, é fundamental configurar adequadamente os modos de consumo de energia para que ele opere com eficiência energética máxima, especialmente em aplicações alimentadas por bateria. A segurança do firmware também pode ser aprimorada acessando as opções de proteção e configuração da memória Flash por meio dos *option bytes*, proporcionando maior integridade do sistema. 

Esse microcontrolador é especialmente recomendado em cenários nos quais se busca baixo consumo, alta integração de periféricos, múltiplos protocolos de comunicação e robustez elétrica. Por reunir todas essas características em um único chip, sua arquitetura traz excelente custo-benefício e grande flexibilidade para projetos avançados em IoT, automação, aplicações industriais e sistemas móveis.