section "s03_m4_000"{
    int var0;
    int var1;
    SoundEffect_PlaySE(21, 127);
    System_Wait(#300);
    SoundEffect_StopSE(21, 0);
    if (Parameter_GetCh1Param(4, 130) < 2){
        if (Parameter_GetCh1Param(4, 512) != 2){
            Voice_PlayVoice("S0304000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝?\nUmm, it's ｛主人公苗字｝\n｛主人公名前｝.");
            Voice_PlayVoice("S0304000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. What's up?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hey, would you like to visit the\nshrine together for New Year's Day?");
            Voice_PlayVoice("S0304000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Too much of a hassle. I'll pass.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see...\nSorry for asking you with such short\nnotice.");
            Voice_PlayVoice("S0304000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Sorry.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(It can't be helped...\nI'm going to the shrine for New\nYear's Day alone.)");
            var0 = 1;
            }
        else {
            Message_Who(4);
            Message_MsgDisp("Hariya", "..........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? Oh, ｛Hariya＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Hariya＊＊｝ seems\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if (Parameter_GetCh1Param(4, 130) == 2){
        if (Parameter_GetCh1Param(4, 512) != 2){
            var1 = System_Randam(0, 100);
            if (var1 <= 40){
                Voice_PlayVoice("S0304000_D00000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hello.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝?\nUmm, it's ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("S0304000_D00100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah. What's up?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, would you like to go visit the\nshrine together for New Year's Day?");
                Voice_PlayVoice("S0304000_D00200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I see, the shrine... Sure.\nI'll go with you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?\nWell then, where shall we meet?");
                Voice_PlayVoice("S0304000_D00300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'll come over and pick you up.\nJust get ready and wait.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, got it. So...");
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
                Voice_PlayVoice("S0304000_D00000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hello.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝?\nUmm, it's ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("S0304000_D00100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah. What's up?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, would you like to go visit the\nshrine together for New Year's Day?");
                Voice_PlayVoice("S0304000_D00400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Too much of a hassle. I'll pass.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see...\nSorry for asking you with such short\nnotice.");
                Voice_PlayVoice("S0304000_D00500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Sorry.");
                SoundEffect_PlaySE(20, 127);
                Message_Who(0);
                Message_MsgDisp("主人公", "(It can't be helped...\nI'm going to the shrine for New\nYear's Day alone.)");
                var0 = 1;
                }
            }
        else {
            Message_Who(4);
            Message_MsgDisp("Hariya", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hello? Oh, ｛Hariya＊＊｝?");
            SoundEffect_PlaySE(330);
            System_Wait(20);
            SoundEffect_PlaySE(23);
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Hariya＊＊｝ seems\nangry...)");
            SoundEffect_StopSE(23, 0);
            var0 = 1;
            }
        }
    else if ((Parameter_GetCh1Param(4, 130) == 3) && (Parameter_GetCh1Param(4, 512) != 2)){
        Voice_PlayVoice("S0304000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝?\nUmm, it's ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("S0304000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, what, it's already the start of\na new year?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, would you like to go visit the\nshrine together for New Year's Day?");
        if (System_GlobalWork(23, 1) == 4){
            Voice_PlayVoice("FD_04_180_00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nHow should I say this, why me...?\nNevermind, I'll join you.");
            }
        else {
            Voice_PlayVoice("S0304000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I don't hate that kind of invite～.\nOkay, I'll tag along!");
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "Great! So, where shall we meet?");
        Voice_PlayVoice("S0304000_D00900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Just get ready and wait.\nI'll come over to pick you up.");
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
    else if ((Parameter_GetCh1Param(4, 130) == 3) && (Parameter_GetCh1Param(4, 512) == 2)){
        Message_Who(4);
        Message_MsgDisp("Hariya", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? Oh, ｛Hariya＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hariya＊＊｝ seems\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    else if ((Parameter_GetCh1Param(4, 130) >= 4) && (Parameter_GetCh1Param(4, 512) != 2)){
        Voice_PlayVoice("S0304000_D01200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Hariya＊＊｝?\nUmm, it's ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("S0304000_D01300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah, what is it? What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, would you like to go visit the\nshrine together for New Year's Day\nnow?");
        Voice_PlayVoice("S0304000_D01400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... I'll tag along, of course.\nI was about to ask you, too.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Great!\nWell then, where shall we meet?");
        Voice_PlayVoice("S0304000_D01500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'll come over to pick you up.\nJust wait there.\nOh, you have to get ready properly!");
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
    else if ((Parameter_GetCh1Param(4, 130) >= 4) && (Parameter_GetCh1Param(4, 512) == 2)){
        Message_Who(4);
        Message_MsgDisp("Hariya", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello? Oh, ｛Hariya＊＊｝?");
        SoundEffect_PlaySE(330);
        System_Wait(20);
        SoundEffect_PlaySE(23);
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hariya＊＊｝ seems\nangry...)");
        SoundEffect_StopSE(23, 0);
        var0 = 1;
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M4", 0);
        System_Call_GS2("S07", "M4", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M4", 0);
        break ;
        case 1:
        System_GlobalWork(6, 0, 1);
        break ;
        }
    }
