section "s04_m5_000"{
    int var0;
    if (Parameter_GetCh1Param(5, 130) <= 3){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, a phone call.");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0405000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Happy New Year!\nIt's me, it's me▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.\nHappy New Year.");
        Voice_PlayVoice("S0405000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, would you like to visit the\nshrine?\nWe'll go together and pray for our\nhappiness▼");
        Message_MsgSel("Yeah, let's go!", "Umm, I'm sorry...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0405000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Great.\nWell, I'll come over to pick you up.\nI don't think it will take long.");
            Voice_PlayVoice("S0405000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Just get ready and wait eagerly▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Got it! Later then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay! Time to prepare!\nI wonder what should I wear...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0405000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Goodbye, happy bluebird...");
            Voice_PlayVoice("S0405000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Just kidding.\nLet's go out another day. Maybe.\nWell then, later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me.\nMaybe it was bad to turn him\ndown...)");
            Parameter_AddCh1Param(5, 62, 4);
            var0 = 1;
            break ;
            }
        }
    else {
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, a phone call.");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0405000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Happy New Year!\nIt's me, it's me▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.\nWhat's up?");
        Voice_PlayVoice("S0405000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "You know?\nI want to see you so bad...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Voice_PlayVoice("S0405000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Oh, umm, I meant the shrine, the\nshrine.\nSorry, if you have the time, will\nyou come along?");
        Message_MsgSel("Sure, let's go!", "Umm, I'm sorry...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0405000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "For real? I'm so glad...");
            Voice_PlayVoice("S0405000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thank you.\nIn that case, I'll come over in a\nbit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, got it.\nI'll be waiting for you then.");
            Voice_PlayVoice("S0405000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm happy to see you on New Year's\nDay.\nWell then, I'll see you later!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, time to prepare!\nI wonder what I should wear...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0405000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see... That's too bad...");
            Voice_PlayVoice("S0405000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Got it.\nIn that case, I'll see you at\nschool.");
            Voice_PlayVoice("S0405000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eating rice cakes, and mumbling in\nmy sleep...\nOh-- my rice cake friends.\nOh-- my friend～...");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me.\nMaybe it was bad to turn him\ndown...)");
            Parameter_AddCh1Param(5, 62, 4);
            var0 = 1;
            break ;
            }
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M5", 0);
        System_Call_GS2("S07", "M5", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M5", 0);
        break ;
        case 1:
        System_GlobalWork(0, 0, 5);
        System_GlobalWork(2, 0, 1);
        System_GlobalWork(4, 0, 1);
        break ;
        }
    }
