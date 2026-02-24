section "s03_m3_000"{
    int var0;
    int var1;
    SoundEffect_PlaySE(21, 127);
    System_Wait(#300);
    SoundEffect_StopSE(21, 0);
    if (Parameter_GetCh1Param(3, 130) < 2){
        if (Parameter_GetCh1Param(3, 512) != 2){
            Voice_PlayVoice("S0303000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, this is Hikami.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝?\nUmm, it's ｛主人公苗字｝\n｛主人公名前｝.");
            Voice_PlayVoice("S0303000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It's you... Happy New Year.");
            Message_Who(0);
            Message_MsgDisp("主人公", "H-Happy New Year.\nUmm, would you like to visit the\nshrine for New Year's Day with me?");
            Voice_PlayVoice("S0303000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "To the shrine for New Year's Day...\nI already have plans.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Is that right...\nSorry to bother you.");
            Voice_PlayVoice("S0303000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Well, is that all you needed?\nThen I am hanging up now.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(It can't be helped.\nI will visit the shrine for New\nYear's Day alone.)");
            var0 = 1;
            }
        else {
            Message_Who(3);
            Message_MsgDisp("Hikami", ".............");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? ｛Hikami＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Hikami＊＊｝ seems to be\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if (Parameter_GetCh1Param(3, 130) == 2){
        if (Parameter_GetCh1Param(3, 512) != 2){
            var1 = System_Randam(0, 100);
            if (var1 <= 40){
                Voice_PlayVoice("S0303000_C00000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes, this is Hikami.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝?\nUmm, it's ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("S0303000_C00100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You... Happy New Year.");
                Message_Who(0);
                Message_MsgDisp("主人公", "H-Happy New Year.\nUmm, would you like to visit the\nshrine for New Year's Day with me?");
                Voice_PlayVoice("S0303000_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nTo the shrine for New Year's Day?\nI do not mind.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Great.\nWhere would you like to meet then?");
                Voice_PlayVoice("S0303000_C00300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Right... I will meet you there.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, good. I'll be waiting then.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(What clothes should I wear today?)");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                Run_Kigae(3);
                var0 = 0;
                }
            else if (var1 >= 41){
                Voice_PlayVoice("S0303000_C00000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes, this is Hikami.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝?\nUmm, it's ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("S0303000_C00100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It's you... Happy New Year.");
                Message_Who(0);
                Message_MsgDisp("主人公", "H-Happy New Year.\nUmm, would you like to visit the\nshrine for New Year's Day with me?");
                Voice_PlayVoice("S0303000_C00400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "To the shrine for New Year's Day...\nI already have plans.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh? Is that right...\nSorry to bother you.");
                Voice_PlayVoice("S0303000_C00500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Well, is that all you needed?\nThen I am hanging up now.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(It can't be helped.\nI will visit the shrine for New\nYear's Day alone.)");
                var0 = 1;
                }
            }
        else {
            Message_Who(3);
            Message_MsgDisp("Hikami", ".............");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? ｛Hikami＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Hikami＊＊｝ seems to be\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if ((Parameter_GetCh1Param(3, 130) == 3) && (Parameter_GetCh1Param(3, 512) != 2)){
        Voice_PlayVoice("S0303000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes, this is Hikami.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝?\nUmm, it's ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("S0303000_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You... Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year!\nHey, would you like to visit the\nshrine for New Year's Day with me?");
        if (System_GlobalWork(23, 1) == 3){
            Voice_PlayVoice("FD_03_180_00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You want to go with me?\nI do not mind...\nOkay, I will go with you while you\npray for love then.");
            }
        else {
            Voice_PlayVoice("S0303000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Aah, I do not have a problem with\nit.\nI have not left, yet.");
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "Great.\nWhere would you like to meet, then?");
        Voice_PlayVoice("S0303000_C00900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Right...\nPublic places would be crowded with\npeople...\nIt would probably be safer to meet\nyou at home.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, great. I'll be waiting then.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Okay, what will I wear today?)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(3);
        var0 = 0;
        }
    else if ((Parameter_GetCh1Param(3, 130) == 3) && (Parameter_GetCh1Param(3, 512) == 2)){
        Message_Who(3);
        Message_MsgDisp("Hikami", ".............");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? ｛Hikami＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ seems to be\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    else if ((Parameter_GetCh1Param(3, 130) >= 4) && (Parameter_GetCh1Param(3, 512) != 2)){
        Voice_PlayVoice("S0303000_C01300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes, this is Hikami.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝?\nUmm, it's ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("S0303000_C01400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It's you! Happy New Year.\nMy best regards for this year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year!\nI should be the one giving my best\nregards.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, would you like to visit the\nshrine for New Year's Day with me?");
        Voice_PlayVoice("S0303000_C01500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "To the shrine for New Year's Day?\nThat is fine with me, I will go.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Great!\nWhere would you like to meet, then?");
        Voice_PlayVoice("S0303000_C01600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I will meet you at your house.\nThat is a longer way...\nIt must be a rendevous point,\nthough.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, great. I'll be waiting, then.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Okay, I have to start getting ready\nright now!\nWhat should I wear?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(3);
        var0 = 0;
        }
    else if ((Parameter_GetCh1Param(3, 130) >= 4) && (Parameter_GetCh1Param(3, 512) == 2)){
        Message_Who(3);
        Message_MsgDisp("Hikami", ".............");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? ｛Hikami＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ seems to be\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M3", 0);
        System_Call_GS2("S07", "M3", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M3", 0);
        break ;
        case 1:
        System_GlobalWork(6, 0, 1);
        break ;
        }
    }
