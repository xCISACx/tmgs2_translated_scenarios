section "s03_m5_000"{
    int var0;
    int var1;
    SoundEffect_PlaySE(21, 127);
    System_Wait(#300);
    SoundEffect_StopSE(21, 0);
    if (Parameter_GetCh1Param(5, 130) < 2){
        if (Parameter_GetCh1Param(5, 512) != 2){
            Voice_PlayVoice("S0305000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hello?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝.");
            Voice_PlayVoice("S0305000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Happy New Year. What's up?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you want to come to the shrine\nwith me for New Year's Day?");
            Voice_PlayVoice("S0305000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "*Groans* Today's not good... Sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... That's too bad.");
            Voice_PlayVoice("S0305000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm looking forward to seeing you\nwhen school starts.\nWell, see you then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(It can't helped.\nI'll visit the shrine alone.)");
            var0 = 1;
            }
        else {
            Message_Who(5);
            Message_MsgDisp("Chris", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? Oh, ｛Chris＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Chris＊＊｝ seems to be\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if (Parameter_GetCh1Param(5, 130) == 2){
        if (Parameter_GetCh1Param(5, 512) != 2){
            var1 = System_Randam(0, 100);
            if (var1 <= 40){
                Voice_PlayVoice("S0305000_E00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hello?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("S0305000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Happy New Year. What's up?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you want to come to the shrine\nwith me for New Year's Day?");
                Voice_PlayVoice("S0305000_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Sure, just in time.\nI was thinking about asking out the\ncute girl.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Great! Where do you want to meet?");
                Voice_PlayVoice("S0305000_E00300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Oh, I'll come over to pick you up▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, got it. I'll be waiting then.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(What should I do in the meantime?\nWhat should I wear...)");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                Run_Kigae(3);
                var0 = 0;
                }
            else if (var1 >= 41){
                Voice_PlayVoice("S0305000_E00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hello?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("S0305000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Happy New Year. What's up?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you want to come to the shrine\nwith me for New Year's Day?");
                Voice_PlayVoice("S0305000_E00400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "*Groans* Today's not good... Sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see... That's too bad.");
                Voice_PlayVoice("S0305000_E00500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm looking forward to seeing you\nwhen school starts.\nWell, see you then.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(It can't helped.\nI'll visit the shrine alone.)");
                var0 = 1;
                }
            }
        else {
            Message_Who(5);
            Message_MsgDisp("Chris", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? Oh, ｛Chris＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Chris＊＊｝ seems to be\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if ((Parameter_GetCh1Param(5, 130) == 3) && (Parameter_GetCh1Param(5, 512) != 2)){
        Voice_PlayVoice("S0305000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("S0305000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year!\nHey, do you want to come to the\nshrine with me for New Year's Day?");
        Voice_PlayVoice("S0305000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Nice timing.\nIs it possible that our minds\nconnected at the last minute?!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I guess.\nWhere do you want to meet?");
        Voice_PlayVoice("S0305000_E00900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...\nYou don't need to worry about that,\nat all...\nWell anyway, I'll come over to pick\nyou up, so just wait eagerly.");
        if (System_GlobalWork(23, 1) == 5){
            Voice_PlayVoice("FD_05_180_00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I feel bad for the guy, however....\nAnyway, I'll see you later!");
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* Got it! Later.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(What should I do in the meantime?\nWhat should I wear...)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(3);
        var0 = 0;
        }
    else if ((Parameter_GetCh1Param(5, 130) == 3) && (Parameter_GetCh1Param(5, 512) == 2)){
        Message_Who(5);
        Message_MsgDisp("Chris", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? ｛Chris＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Chris＊＊｝ seems to be\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    else if ((Parameter_GetCh1Param(5, 130) >= 4) && (Parameter_GetCh1Param(5, 512) != 2)){
        Voice_PlayVoice("S0305000_E01300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("S0305000_E01400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...\nHow lucky am I to hear your voice at\nthe start of the new year...");
        Voice_PlayVoice("S0305000_E01500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Happy New Year. What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, do you want to come to the\nshrine with me for New Year's Day?");
        Voice_PlayVoice("S0305000_E01600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Of course it's a yes.\nEven I can't refuse.");
        Voice_PlayVoice("S0305000_E01700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Well then, let me escort you for a\nday▼ I'll welcome you the right way.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, got it. I'll be waiting then.");
        Voice_PlayVoice("S0305000_E01800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...\nNot a bad start to see each other on\nNew Year's Day.\nWell then, see you later.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(What should I do in the meantime?\nWhat should I wear...)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(3);
        var0 = 0;
        }
    else if ((Parameter_GetCh1Param(5, 130) >= 4) && (Parameter_GetCh1Param(5, 512) == 2)){
        Message_Who(5);
        Message_MsgDisp("Chris", "......");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? ｛Chris＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Chris＊＊｝ seems to be\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M5", 0);
        System_Call_GS2("S07", "M5", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M5", 0);
        break ;
        case 1:
        System_GlobalWork(6, 0, 1);
        break ;
        }
    }
