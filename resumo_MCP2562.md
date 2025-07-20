## Datasheet MCP2561/2FD - Transceptor CAN

O MCP2561/2FD é um transceptor CAN (Controller Area Network) de alta velocidade de segunda geração da Microchip Technology, otimizado para CAN FD (Flexible Data Rate). O dispositivo serve como interface entre um controlador de protocolo CAN e o barramento físico, oferecendo capacidades de transmissão e recepção diferenciais.

### Características Principais

#### Compatibilidade com CAN FD:
O dispositivo opera em taxas de transmissão de 2, 5 e 8 Mbps, proporcionando alta velocidade de comunicação com atraso de propagação máximo de 120 ns. Ele mantém uma simetria de atraso de loop dentro da faixa de -10% a +10% para operação a 2 Mbps, garantindo sincronização precisa na rede. Além disso, o transceptor implementa os padrões ISO-11898-2 e ISO-11898-5 para a camada física, assegurando assim total conformidade com as especificações internacionais para comunicação de CAN FD.


#### Eficiência Energética:
O MCP2561/2FD tem alta eficiência energética, com uma corrente de standby extremamente baixa de 5 µA, o que contribui para a redução do consumo em aplicações automotivas e industriais. A variante MCP2562FD possui um pino VIO, tendo uma interface direta com controladores CAN e microcontroladores, operando em faixas de tensão de 1,8V a 5,5V, o que brinda flexibilidade para integração em diferentes sistemas. Outrossim, o produto conta com uma função de despertar do barramento CAN, equipada com filtro de wake-up, que possibilita a ativação do sistema a partir de eventos no barramento, mantendo consumo de energia reduzido durante períodos de inatividade.

#### Recursos de Proteção:
O produto confere diversas formas de proteção — para ambos barramento e controlador — sendo elas: proteção contra transientes de alta voltagem em ambientes automotivos, proteção contra descargas eletrostáticas (ESD) elevadas nos pinos CANH e CANL, proteção térmica com desligamento automático, proteção contra curto-circuitos (voltagem positiva ou negativa da bateria) e detecção de falta de terra, concomitante com detecção permanente de dominante.

### Especificações Elétricas

#### Alimentação:
- Tensão de alimentação VDD: 4.5V a 5.5V;
- Corrente de alimentação: no modo recessivo são tipicamente 5 mA e no modo dominante, 45 mA;
- Corrente de standby: 5 µA.

#### Características do Transmissor
- Tensão de saída recessiva dos cabos de comunicação: 2.0V a 3.0V;
- Tensão de saída dominante diferencial: 1.5V a 3.0V;
- Corrente de curto-circuito: 120 mA.

#### Características do Receptor:
- Tensão diferencial recessiva: -1.0V a +0.5V;
- Tensão diferencial dominante: 0.9V a VDD;
- Threshold diferencial: 0.5V a 0.9V;

### Modos de Operação

No modo normal de operação, o MCP2561/2FD é ativado ao se aplicar um nível baixo no pino STBY. Nesse estado, o bloco driver do transceptor está operacional, permitindo a condução eficiente dos sinais ao longo do barramento CAN. O receptor diferencial de alta velocidade permanece ativo, garantindo a correta recepção dos dados transmitidos.

Já no modo standby, a seleção é feita aplicando um nível alto ao pino STBY. Nessa condição, o consumo de energia é significativamente reduzido, pois tanto o transmissor quanto a parte de alta velocidade do receptor são desligados. O dispositivo passa a operar com um receptor de baixa potência e mantém ativo um filtro de wake-up, responsável por monitorar eventos no barramento. Caso ocorra uma borda negativa no pino RXD, o sistema é capaz de sair do modo standby, ativando novamente suas funções completas para retomar a comunicação.

###### O MCP2561/2FD é uma solução completa e robusta para comunicação CAN FD, destacando-se por sua alta velocidade, baixo consumo de energia e proteção abrangente. Essas características o tornam ideal para aplicações que exigem comunicação confiável e eficiente, como sistemas automotivos de 12V e 24V, redes CAN FD de alta velocidade, ambientes industriais que demandam robustez e sistemas embarcados com requisitos de baixo consumo. Sua compatibilidade com múltiplas tensões de alimentação e recursos avançados de proteção reforçam sua adequação para cenários automotivos e industriais exigentes, proporcionando flexibilidade e segurança em projetos modernos de comunicação embarcada.
