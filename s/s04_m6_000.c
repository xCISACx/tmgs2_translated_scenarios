section "s04_m6_000"{
    int var0;
    if (Parameter_GetCh1Param(6, 130) <= 2){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, who is it?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0406000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hello, Senpai? It's Amachi.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year,\n｛Amachi＊＊｝.");
        Voice_PlayVoice("S0406000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Congratulations!\nWill Senpai come with me to visit\nthe shrine for New Year's Day?");
        Message_MsgSel("Yeah, sure!", "Oh... I'm sorry.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0406000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Great! Then I'll come over there.\nPlease wait for me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Roger. Well then, see you soon.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do for now?\nI'll pick out what I'll wear...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0406000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, you have something else to do?\nI'm sorry...\nWell, see you at school.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me.\nMaybe it was bad to turn him\ndown...)");
            Parameter_AddCh1Param(6, 62, 4);
            var0 = 1;
            break ;
            }
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, hello?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0406000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hello, Senpai? It's me!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nHappy New Year!");
        Voice_PlayVoice("S0406000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You too!\nHey, hey, want to visit the shrine\nfor New Year's Day?");
        Message_MsgSel("Yeah, sounds good!", "Ah... I'm sorry.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Great! Then I will come meet you.\nWait for me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, roger. Then see you later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do for now?\nI'll pick out what I'll wear...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0406000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... You have something else to do?\nIf that's what you want.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm sorry.");
            Voice_PlayVoice("S0406000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's okay, it's fine.\nThen see you at school.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\nask me.\nMaybe it was bad to turn him\ndown...)");
            Parameter_AddCh1Param(6, 62, 4);
            var0 = 1;
            break ;
            }
        }
    else {
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, hello?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("S0406000_F00900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hello, Senpai?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nWhat's up?");
        Voice_PlayVoice("S0406000_F01000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Umm... I...\nDo you want to visit the shrine for\nNew Year's Day?");
        Message_MsgSel("Yeah, sounds good!", "Ah... I'm sorry.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("S0406000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Really!? ...\nI thought there was no point in\nasking, that you'd definitely have\nplans...");
            Voice_PlayVoice("S0406000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It was good to call!\nI will come meet you, get ready and\nwait for me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, roger. See you later then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(What should I do for now?\nI'll pick out what I'll wear...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Kigae(3);
            var0 = 0;
            break ;
            case 1:
            Voice_PlayVoice("S0406000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Possibly going with other\npeople......\nNo, it's nothing.\nSee you at school then, Senpai...");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(It feels like I did something\nbad...)");
            Parameter_AddCh1Param(6, 62, 4);
            var0 = 1;
            break ;
            }
        }
    switch (var0){
        case 0:
        System_Call_GS2("S06", "M6", 0);
        System_Call_GS2("S07", "M6", 0);
        System_Call_GS2("S08", "PL", 0);
        System_Call_GS2("S09", "M6", 0);
        break ;
        case 1:
        System_GlobalWork(0, 0, 6);
        System_GlobalWork(2, 0, 1);
        System_GlobalWork(4, 0, 1);
        break ;
        }
    }
