section "s03_m2_000"{
    int var0;
    int var1;
    SoundEffect_PlaySE(21, 127);
    System_Wait(#300);
    SoundEffect_StopSE(21, 0);
    if (Parameter_GetCh1Param(2, 130) < 2){
        if (Parameter_GetCh1Param(2, 512) != 2){
            Voice_PlayVoice("S0302000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hello?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝.");
            Voice_PlayVoice("S0302000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hey, do you want to visit the shrine\nfor New Year's together?");
            Voice_PlayVoice("S0302000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'll pass.\nI don't want to go to a crowded\nplace for New Year's.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... It can't be helped.");
            Voice_PlayVoice("S0302000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah... My bad.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(It really can't be helped...\nLooks like I'm going alone.)");
            var0 = 1;
            }
        else {
            Message_Who(2);
            Message_MsgDisp("Shiba", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? ｛Shiba＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Shiba＊＊｝ seems to be\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if (Parameter_GetCh1Param(2, 130) == 2){
        if (Parameter_GetCh1Param(2, 512) != 2){
            var1 = System_Randam(0, 100);
            if (var1 <= 40){
                Voice_PlayVoice("S0302000_B00000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Hello?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("S0302000_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to visit the shrine\nfor New Year's together?");
                Voice_PlayVoice("S0302000_B00200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Sounds good.\nI'm free, I'll go with you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? Then where should we meet?");
                Voice_PlayVoice("S0302000_B00300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I'll come meet you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, roger. Well, I'll be waiting.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Okay! What should I wear?)");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                Run_Kigae(3);
                var0 = 0;
                }
            else if (var1 >= 41){
                Voice_PlayVoice("S0302000_B00000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Hello?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("S0302000_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to visit the shrine\nfor New Year's together?");
                Voice_PlayVoice("S0302000_B00400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I'll pass.\nI don't want to go to a crowded\nplace for New Year's.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see... It can't be helped.");
                Voice_PlayVoice("S0302000_B00500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah... My bad.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(It really can't be helped...\nLooks like I'm going alone.)");
                var0 = 1;
                }
            }
        else {
            Message_Who(2);
            Message_MsgDisp("Shiba", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? ｛Shiba＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Shiba＊＊｝ seems to be\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if ((Parameter_GetCh1Param(2, 130) == 3) && (Parameter_GetCh1Param(2, 512) != 2)){
        Voice_PlayVoice("S0302000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hello?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("S0302000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, do you want to visit the shrine\nfor New Year's together?");
        if (System_GlobalWork(23, 1) == 2){
            Voice_PlayVoice("FD_02_180_00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well... Is it okay? With me.\nI don't mind...");
            }
        else {
            Voice_PlayVoice("S0302000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So, visiting the shrine for New\nYear's?\nI go every now and then...\nSounds good.");
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "Really? Then where should we meet?");
        Voice_PlayVoice("S0302000_B00900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI guess the crowd outside of the\nshrine would be a hassle.\nI'll come pick you up.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, great. I'll be waiting then.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Okay! What should I wear?)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(3);
        var0 = 0;
        }
    else if ((Parameter_GetCh1Param(2, 130) == 3) && (Parameter_GetCh1Param(2, 512) == 2)){
        Message_Who(2);
        Message_MsgDisp("Shiba", "...........");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? ｛Shiba＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Shiba＊＊｝ seems to be\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    else if ((Parameter_GetCh1Param(2, 130) >= 4) && (Parameter_GetCh1Param(2, 512) != 2)){
        Voice_PlayVoice("S0302000_B01300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hello?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("S0302000_B01400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Aah... It's you. What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, do you want to visit the shrine\nfor New Year's together?");
        Voice_PlayVoice("S0302000_B01500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "A visit to the shrine...\nSounds good.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really? Then where should we meet?");
        Voice_PlayVoice("S0302000_B01600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I'll come over.\nStay home and get ready.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, great. I'll be waiting then.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Okay! What should I wear?)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(3);
        var0 = 0;
        }
    else if ((Parameter_GetCh1Param(2, 130) >= 4) && (Parameter_GetCh1Param(2, 512) == 2)){
        Message_Who(2);
        Message_MsgDisp("Shiba", "...........");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? ｛Shiba＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Shiba＊＊｝ seems to be\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M2", 0);
        System_Call_GS2("S07", "M2", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M2", 0);
        break ;
        case 1:
        System_GlobalWork(6, 0, 1);
        break ;
        }
    }
