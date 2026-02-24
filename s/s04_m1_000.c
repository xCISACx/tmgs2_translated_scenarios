section "s04_m1_000"{
    int var0;
    if (Parameter_GetCh1Param(1, 130) <= 3){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Who could that be?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0401000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hello? It's me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nHappy New Year.");
        Voice_PlayVoice("S0401000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Eh～... Happy New Year.\nHey, do you want to visit the shrine\nfor New Year's?");
        Message_MsgSel("Yeah, sounds good!", "Ehh, I'm sorry...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0401000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay.\nThen wait for me a little while.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay. I'll be waiting then.");
            Voice_PlayVoice("S0401000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Roger. Well, later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(What clothes should I wear?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0401000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You want me to go alone?\nUnder this wintry sky? ...\nWas last year not good enough for\nyou?");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\ninvite me...\nMaybe it was bad to turn him\ndown...)");
            Parameter_AddCh1Param(1, 62, 4);
            var0 = 1;
            break ;
            }
        }
    else {
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Who could that be?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0401000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hello? Eh～... Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nHappy New Year!");
        Voice_PlayVoice("S0401000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah...\nHey, do you want to visit the shrine\nfor New Year's?");
        Message_MsgSel("Yeah, of course!", "Well, umm... Sorry.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0401000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm saved.\nNow I don't have to stand in the\ncold alone.");
            Voice_PlayVoice("S0401000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, I'll pick you up in a bit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay! I'll be waiting!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(What clothes should I wear today?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0401000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I see...\nWell, everyone has things to do on\nNew Year's.\nGot it, later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\ninvite me...\nMaybe it was bad to turn him\ndown...)");
            Parameter_AddCh1Param(1, 62, 4);
            var0 = 1;
            break ;
            }
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M1", 0);
        System_Call_GS2("S07", "M1", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M1", 0);
        break ;
        case 1:
        System_GlobalWork(0, 0, 1);
        System_GlobalWork(2, 0, 1);
        System_GlobalWork(4, 0, 1);
        break ;
        }
    }
