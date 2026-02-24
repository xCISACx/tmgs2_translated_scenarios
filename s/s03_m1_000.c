section "s03_m1_000"{
    int var0;
    int var1;
    SoundEffect_PlaySE(21, 127);
    System_Wait(#300);
    SoundEffect_StopSE(21, 0);
    if (Parameter_GetCh1Param(1, 130) < 2){
        if (Parameter_GetCh1Param(1, 512) != 2){
            Voice_PlayVoice("S0301000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, this is Saeki.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝?\nHappy New Year!");
            Voice_PlayVoice("S0301000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That's a happy voice... It's you.\nHappy New Year.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hey, do you want to visit the shrine\ntogether for New Year's Day?");
            Voice_PlayVoice("S0301000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Uh, no. It's cold. Crowded.\nAnd I'm sleepy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... That's too bad.");
            Voice_PlayVoice("S0301000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Sorry. Later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(It can't be helped.\nI'll go to the shrine for New Year's\nDay alone.)");
            var0 = 1;
            }
        else {
            Message_Who(1);
            Message_MsgDisp("Saeki", "..........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? ｛Saeki＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝ seems to be\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if (Parameter_GetCh1Param(1, 130) == 2){
        if (Parameter_GetCh1Param(1, 512) != 2){
            var1 = System_Randam(0, 100);
            if (var1 <= 40){
                Voice_PlayVoice("S0301000_A00000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah, this is Saeki.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝?\nHappy New Year!");
                Voice_PlayVoice("S0301000_A00100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "That's a happy voice... It's you.\nHappy New Year.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to visit the shrine\ntogether for New Year's Day?");
                Voice_PlayVoice("S0301000_A00200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "To the shrine? Well, sounds good....\nIt doesn't seem that cold.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Great!\nThen where do you want to meet?");
                Voice_PlayVoice("S0301000_A00300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "That's too much of a hassle, so I'll\ncome over there.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Roger. I'll be waiting then.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(What should I wear today?)");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                Run_Kigae(3);
                var0 = 0;
                }
            else if (var1 >= 41){
                Voice_PlayVoice("S0301000_A00000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah, this is Saeki.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝?\nHappy New Year!");
                Voice_PlayVoice("S0301000_A00100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "That's a happy voice... It's you.\nHappy New Year.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, do you want to visit the shrine\ntogether for New Year's Day?");
                Voice_PlayVoice("S0301000_A00400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Uh, no. It's cold. Crowded.\nAnd I'm sleepy.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see... Too bad.");
                Voice_PlayVoice("S0301000_A00500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Sorry. Later.");
                SoundEffect_PlaySE(20);
                Message_Who(0);
                Message_MsgDisp("主人公", "(It can't be helped.\nI'll go to the shrine for New Year's\nDay alone.)");
                var0 = 1;
                }
            }
        else {
            Message_Who(1);
            Message_MsgDisp("Saeki", "..........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? ｛Saeki＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝ seems to be\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if ((Parameter_GetCh1Param(1, 130) == 3) && (Parameter_GetCh1Param(1, 512) != 2)){
        Voice_PlayVoice("S0301000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah, this is Saeki.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝?\nHappy New Year!");
        Voice_PlayVoice("S0301000_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Be nice to me again this year.\nMaybe...\ninvite me to the shrine for New\nYear's Day?");
        Message_Who(0);
        Message_MsgDisp("主人公", "So! You want to go together?");
        if (System_GlobalWork(23, 1) == 1){
            Voice_PlayVoice("FD_01_180_00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "...\nYour \"natural airheaded\" nature is\ngoing strong this year, huh?\nWell, sounds good.");
            }
        else {
            Voice_PlayVoice("S0301000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, okay... Will it be cold?\nIt'll be crowded for sure.");
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "Great!\nThen where do you want to meet?");
        Voice_PlayVoice("S0301000_A00900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I'll stop by your place.\nI think I may die in the cold\nweather if you make me wait.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Roger. I'll be waiting then.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(What clothes should I wear today?)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(3);
        var0 = 0;
        }
    else if ((Parameter_GetCh1Param(1, 130) == 3) && (Parameter_GetCh1Param(1, 512) == 2)){
        Message_Who(1);
        Message_MsgDisp("Saeki", "..........");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? ｛Saeki＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ seems to be\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    else if ((Parameter_GetCh1Param(1, 130) >= 4) && (Parameter_GetCh1Param(1, 512) != 2)){
        Voice_PlayVoice("S0301000_A01200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah, this is Saeki.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝?\nHappy New Year!");
        Voice_PlayVoice("S0301000_A01300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Happy New Year. I said it now, too.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, do you want to visit the shrine\ntogether for New Year's Day?");
        Voice_PlayVoice("S0301000_A01400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Sounds like a plan.\nThe shop is closed, so I'll take it\neasy for New Year's.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then where do you want to meet?");
        Voice_PlayVoice("S0301000_A01500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I'll come meet you. Get ready, okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Roger. I'll be waiting then.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Okay, I'll start getting ready!\nWhat will I wear?)");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        Run_Kigae(3);
        var0 = 0;
        }
    else if ((Parameter_GetCh1Param(1, 130) >= 4) && (Parameter_GetCh1Param(1, 512) == 2)){
        Message_Who(1);
        Message_MsgDisp("Saeki", "..........");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? ｛Saeki＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ seems to be\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M1", 0);
        System_Call_GS2("S07", "M1", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M1", 0);
        break ;
        case 1:
        System_GlobalWork(6, 0, 1);
        break ;
        }
    }
