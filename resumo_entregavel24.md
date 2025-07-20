## Resumo do Relatório: Datalogger para Ensaio Coast Down - Baja SAE 2024

### Objetivos do Projeto

O relatório apresenta o desenvolvimento de um datalogger para realização de ensaios *Coast Down*, um método empírico utilizado na indústria automotiva para determinar forças resistivas que atuam sobre veículos em movimento. O dispositivo foi desenvolvido para atender às diretrizes da SAE Brasil e da norma NBR 10312 (2019).

O ensaio *Coast Down* consiste em acelerar o veículo até uma velocidade constante, depois desacoplar a transmissão para permitir que ele desacelere naturalmente devido às forças resistivas, registrando a velocidade em tempo real a fim de analisar as características de resistência.

### Fundamentação Teórica

O projeto baseia-se na equação de *Road Load*, que representa o somatório dos atritos responsáveis pela desaceleração do veículo. As principais forças analisadas são a resistência ao rolamento e o arrasto aerodinâmico. A equação teórica utilizada é expressa como *RL(v) = A×v² + C*, onde A representa fatores aerodinâmicos e C os fatores constantes de atrito.

A análise dos dados coletados permite determinar coeficientes que governam o comportamento do veículo através de regressão de polinômios aplicada aos dados de velocidade, possibilitando cálculos precisos do coeficiente de resistência aerodinâmica.

### Desenvolvimento do Sistema

#### Hardware

O sistema foi desenvolvido utilizando o software Altium Designer, priorizando modularidade e compactação com componentes SMD. O núcleo do sistema é o microcontrolador ESP32-WROOM-32, escolhido pelo custo-benefício e presença de dois núcleos que permitem processamento simultâneo de dados e comunicação.

O sistema possui alimentação protegida por fusível, conversão de 12V para 3.3V, isolamento elétrico para proteção contra picos de tensão, e sistema de redundância para leitura dos sinais. Foi incorporado um cartão SD para armazenamento local via protocolo SPI, garantindo preservação dos dados mesmo com interrupções de comunicação.

A precisão do sistema foi calculada considerando uma roda fônica de 36 dentes, resultando em resolução de aproximadamente *0,007 km/h* a *40 km/h*, atendendo amplamente aos requisitos da norma NBR 10312.

#### Firmware

O firmware foi desenvolvido em Arduino IDE utilizando C++, organizando as funcionalidades em classes distintas para manutenibilidade. O sistema aproveita os dois núcleos do ESP32 através do FreeRTOS, isolando a leitura e tratamento de dados do seu envio ao servidor.

A coleta de dados utiliza interrupção por borda de subida, calculando velocidade através da diferença de tempo entre interrupções. Os dados são filtrados usando média móvel com janela de 5 valores para suavizar leituras e eliminar variações abruptas. A comunicação ocorre via WiFi (protocolo MQTT) ou ESP-NOW, garantindo flexibilidade na transmissão.

#### Software e Interface

Foi desenvolvido um servidor web para acompanhamento de dados em tempo real. O sistema utiliza MongoDB como banco de dados pela robustez e escalabilidade, com comunicação via MQTT garantindo conexão bidirecional.

A aplicação inclui interface *user-friendly* com funcionalidades para download de gráficos em PDF, permitindo simulação de desempenho do veículo através de cálculos de aceleração e deslocamento. O sistema oferece *Server-Sent Events* (SSE) para atualizações automáticas sem interrupções.

#### Case de Proteção

O invólucro foi projetado em SolidWorks considerando vedação e compactação, com dimensões de 100x51x80mm e conectores IP67. Fabricado em PLA com massa final de 90g, oferece resistência adequada ao ambiente de competição com facilidade de fixação no prototipo.

### Conclusões

O datalogger desenvolvido atendeu com sucesso todas as metas estabelecidas, incluindo capacidade de aquisição superior a 230 Hz, resolução de 0,007 km/h (muito superior ao requisito de 0,2 km/h), peso de 90g (inferior ao limite de 300g) e custo total de R$ 87,81 (inferior ao orçamento de R$ 150,00).

O dispositivo oferece funcionalidades completas para o ensaio *Coast Down*, com hardware preciso conforme normas vigentes, soluções de confiabilidade para leitura e armazenamento, firmware modular com RTOS, e invólucro adequado ao ambiente agressivo do Baja. O projeto demonstra ambas viabilidade técnica e econômica.

O sistema desenvolvido permite análise detalhada das características de resistência do veículo, assim, contribuindo significativamente para otimização do desempenho e desenvolvimento técnico da equipe.