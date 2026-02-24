section "s04_m2_000"{
    int var0;
    if (Parameter_GetCh1Param(2, 130) <= 3){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, I wonder who it is?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0402000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey.... It's Shiba.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nWhat's up?");
        Voice_PlayVoice("S0402000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "If you have time, do you want to\nvisit the shrine with me for New\nYear's Day?");
        Message_MsgSel("Yes, with pleasure!", "Ah... I'm sorry.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0402000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Then I'll come pick you up.\nDon't take more than an hour.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, great!\nI will get ready and wait for you.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do until then?\nWhat should I wear...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0402000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see.\nI had some free time and got too\nhasty.");
            Voice_PlayVoice("S0402000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Bye.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me...\nMaybe it was bad to decline...)");
            Parameter_AddCh1Param(2, 62, 4);
            var0 = 1;
            break ;
            }
        }
    else {
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? I wonder who it is?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0402000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... It's me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nWhat's up?");
        Voice_PlayVoice("S0402000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I wanted to visit the shrine for the\nnew year....\nDo you have time?\nI wanted to go with you.");
        Message_MsgSel("Yeah, I want to go!", "Ah... I'm sorry.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0402000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Really? Then I'll come meet you.\nGet ready.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, great. I'll be waiting then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wah～! What will I wear?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0402000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Got it.\nIt was too sudden, my bad...");
            Voice_PlayVoice("S0402000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well.. Bye.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me...\nMaybe it was bad to decline...)");
            Parameter_AddCh1Param(2, 62, 4);
            var0 = 1;
            break ;
            }
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M2", 0);
        System_Call_GS2("S07", "M2", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M2", 0);
        break ;
        case 1:
        System_GlobalWork(0, 0, 2);
        System_GlobalWork(2, 0, 1);
        System_GlobalWork(4, 0, 1);
        break ;
        }
    }
