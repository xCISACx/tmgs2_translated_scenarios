section "s03_m6_000"{
    int var0;
    int var1;
    SoundEffect_PlaySE(21, 127);
    System_Wait(#300);
    SoundEffect_StopSE(21, 0);
    if (Parameter_GetCh1Param(6, 130) < 2){
        if (Parameter_GetCh1Param(6, 512) != 2){
            Voice_PlayVoice("S0306000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hello?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝?\nUmm, ｛主人公苗字｝\n｛主人公名前｝.");
            Voice_PlayVoice("S0306000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, Senpai. Happy New Year!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Happy New Year!\nHey, would you like to go visit the\nshrine together for New Year's Day?");
            Voice_PlayVoice("S0306000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm sorry.\nI already had something planned...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Well, it can't be helped.");
            Voice_PlayVoice("S0306000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm sorry. Goodbye.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(It can't be helped...\nI'm going to the shrine for New\nYear's Day alone.)");
            var0 = 1;
            }
        else {
            Message_Who(6);
            Message_MsgDisp("Amachi", "........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? ｛Amachi＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to be\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if (Parameter_GetCh1Param(6, 130) == 2){
        if (Parameter_GetCh1Param(6, 512) != 2){
            var1 = System_Randam(0, 100);
            if (var1 <= 40){
                Voice_PlayVoice("S0306000_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hello?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝?\nUmm, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("S0306000_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, Senpai. Happy New Year!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Happy New Year!\nHey, would you like to go visit the\nshrine together for New Year's Day?");
                Voice_PlayVoice("S0306000_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, by all means!\nPlease wait for me and I'll come\nmeet you!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, understood. Well, later.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(What will I wear?)");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                Run_Kigae(3);
                var0 = 0;
                }
            else if (var1 >= 41){
                Voice_PlayVoice("S0306000_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hello?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝?\nUmm, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("S0306000_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, Senpai. Happy New Year!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Happy New Year!\nHey, would you like to go visit the\nshrine together for New Year's Day?");
                Voice_PlayVoice("S0306000_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm sorry.\nI already had something planned...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see... Well, it can't be helped.");
                Voice_PlayVoice("S0306000_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm sorry. Goodbye.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It can't be helped...\nI'm going to the shrine for New\nYear's Day alone.)");
                var0 = 1;
                }
            }
        else {
            Message_Who(6);
            Message_MsgDisp("Amachi", "........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? ｛Amachi＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to be\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if ((Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetCh1Param(6, 512) != 2)){
        Voice_PlayVoice("S0306000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hello?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝?\nUmm, ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("S0306000_F00600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Aah, Senpai?\nCongratulations on a new year!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year!\nHey, would you like to go visit the\nshrine together for New Year's Day?");
        if (System_GlobalWork(23, 1) == 6){
            Voice_PlayVoice("FD_06_180_00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Eh, me?\nI have a feeling this is something\nfunny...");
            }
        Voice_PlayVoice("S0306000_F00700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Yes, it's fine.\nI'll need someone to hold me down at\nan event like this!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well, where would you like to meet?");
        Voice_PlayVoice("S0306000_F00800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Wait for me at home, I will come\npick you up.\nI think I can come in about an hour.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Roger. Well, later.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(What will I wear?)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(3);
        var0 = 0;
        }
    else if ((Parameter_GetCh1Param(6, 130) == 3) && (Parameter_GetCh1Param(6, 512) == 2)){
        Message_Who(6);
        Message_MsgDisp("Amachi", "........");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? ｛Amachi＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to be\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    else if ((Parameter_GetCh1Param(6, 130) >= 4) && (Parameter_GetCh1Param(6, 512) != 2)){
        Voice_PlayVoice("S0306000_F01100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hello?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝?\nUmm, ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("S0306000_F01200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, Senpai! What's the matter?\nIs something up by chance?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, would you like to go visit the\nshrine together for New Year's Day\nnow?");
        Voice_PlayVoice("S0306000_F01300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Yeah, I'll go, I'll go! ...\nOkay, I'm looking forward to it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well then, where do you want to\nmeet?");
        Voice_PlayVoice("S0306000_F01400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "If it's okay, wait at your house.\nI'll come meet you!\nI'll get ready quickly.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, understood. Well then, later.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(What will I wear?)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(3);
        var0 = 0;
        }
    else if ((Parameter_GetCh1Param(6, 130) >= 4) && (Parameter_GetCh1Param(6, 512) == 2)){
        Message_Who(6);
        Message_MsgDisp("Amachi", "........");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? ｛Amachi＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to be\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M6", 0);
        System_Call_GS2("S07", "M6", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M6", 0);
        break ;
        case 1:
        System_GlobalWork(6, 0, 1);
        break ;
        }
    }
