section "b03_m1_230"{
    int var0 = 0;
    int var1 = 0;
    int var2;
    int var3;
    System_GlobalWork(0, 0, 0);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        var2 = 1;
        }
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Character_ChFace(1, 2, 3);
    Character_ChFace(1, 3, 2);
    Background_Bg_GS2("BG_TR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    Message_PauseSkinship();
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        Message_Who(0);
        Message_MsgDisp("主人公", "(That reminds me, I think the races\nare on today.)");
        Message_MsgSel("Ask to go see the race.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301230_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I agree. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            if (Date_ChkDateOpen(74) == 1){
                Background_Bg_GS2("BG_TR610_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                }
            else if (Date_ChkDateOpen(75) == 1){
                Background_Bg_GS2("BG_TR630_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                }
            else if (Date_ChkDateOpen(76) == 1){
                Background_Bg_GS2("BG_TR620_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                }
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301230_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I want to see the finish line...\nAh, there are seats over there.\nLet's move!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            var3 = 1;
            System_Call_GS2("B04", "M1", 237);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0301230_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Let's go in.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            break ;
            }
        }
    else {
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0301230_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go in.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    if ((Date_ChkDateOpen(73) == 0) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        while (var1 == 0){
            Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
            switch (Message_TextSelect()){
                case 0:
                var1 = 1;
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(1, 2, (#1), 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0301230_A02700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Okay. Let's go.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(1, 2, (#1), 2);
                Character_ChFace(1, 3, 1);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0301230_A02800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "We're sitting at the very front,\nokay?\nAlright, let's go! ...\nAh, am I going to be riding it too?");
                Message_CloseMsg();
                Character_Chara_GS2(1, "NON");
                Music_StopBGM(0, 40);
                Environment_StopME(0, 40);
                Graphic_OpenAnim(43, 0, 1);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M1", 231);
                break ;
                case 1:
                var1 = 1;
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(1, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0301230_A02900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Okay. Let's go.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 2);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0301230_A03000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Riding this is kind of standard.\nLet's ride it.");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                Message_CloseMsg();
                Character_Chara_GS2(1, "NON");
                Music_StopBGM(0, 40);
                Environment_StopME(0, 40);
                Graphic_OpenAnim(44, 0, 1);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M1", 232);
                break ;
                case 2:
                Message_MsgSel("I want to ride the merry-go-round.", "Let's go to the haunted house.", "As expected...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Character_ChFace(1, 3, 1);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0301230_A04300", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Alright. It's fine.\nIt's better than that other thing...");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                    Character_ChFace(1, 3, 1);
                    Character_ChFace(1, 2, 5);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0301230_A04400", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "I thought so...\nAs expected, it has an effect on you\nwhen you look at it from up close...");
                    Message_CloseMsg();
                    Character_Chara_GS2(1, "NON");
                    Music_StopBGM(0, 40);
                    Environment_StopME(0, 40);
                    Graphic_OpenAnim(45, 0, 1);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M1", 233);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Character_ChFace(1, 3, 1);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0301230_A04500", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Hey, of all things, you want to ride\nthat no matter what?");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(1, 3, (#1), 2);
                    Character_ChFace(1, 3, 4);
                    Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0301230_A04600", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Something will surely come at us...\nI know that much.");
                    Message_CloseMsg();
                    Character_Chara_GS2(1, "NON");
                    Music_StopBGM(0, 40);
                    Environment_StopME(0, 40);
                    Graphic_OpenAnim(46, 0, 1);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M1", 234);
                    break ;
                    case 2:
                    break ;
                    }
                break ;
                }
            }
        }
    else if ((Date_ChkDateOpen(73) == 1) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        if ((Date_ChkDateOpen(74) == 0) && (Date_ChkDateOpen(75) == 0) && (Date_ChkDateOpen(76) == 0)){
            Voice_PlayVoice("B0301230_A02600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... So, what should we do?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0301230_A02700", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Okay. Let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Character_ChFace(1, 3, 1);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0301230_A02800", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "We're sitting at the very front,\nokay?\nAlright, let's go! ...\nAh, am I going to be riding it too?");
                    Message_CloseMsg();
                    Character_Chara_GS2(1, "NON");
                    Music_StopBGM(0, 40);
                    Environment_StopME(0, 40);
                    Graphic_OpenAnim(43, 0, 1);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M1", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Character_ChFace(1, 3, 0);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0301230_A02900", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Okay. Let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                    Character_ChFace(1, 2, 3);
                    Character_ChFace(1, 3, 2);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0301230_A03000", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Riding this is kind of standard.\nLet's ride it.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(1, "NON");
                    Music_StopBGM(0, 40);
                    Environment_StopME(0, 40);
                    Graphic_OpenAnim(44, 0, 1);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M1", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's drive on the go-carts.", "Or...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 2, 0);
                        Character_ChFace(1, 3, 1);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0301230_A03100", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "...\nRather than wanting to ride it, you\nwant to make me ride it, right?");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                        Character_ChFace(1, 3, 1);
                        Character_ChFace(1, 2, 1);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0301230_A03200", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "W-Wait a second!\nLet's ride it when there aren't any\npeople around!\nOkay?");
                        Message_CloseMsg();
                        Character_Chara_GS2(1, "NON");
                        Music_StopBGM(0, 40);
                        Environment_StopME(0, 40);
                        Graphic_OpenAnim(45, 0, 1);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M1", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 2, 0);
                        Character_ChFace(1, 3, 3);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0301230_A03300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Alright, let's try taking on my\ntheory about speed.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                        Character_ChFace(1, 3, 3);
                        Character_ChFace(1, 2, 4);
                        Character_BlinkStart(1, 2, (#1), 2);
                        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0301230_A03400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Oh... It looks like the real thing.\nI'm trembling with excitement...");
                        Message_CloseMsg();
                        Character_Chara_GS2(1, "NON");
                        Music_StopBGM(0, 40);
                        Environment_StopME(0, 40);
                        Graphic_OpenAnim(47, 0, 1);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M1", 235);
                        break ;
                        case 2:
                        Message_MsgSel("Let's go to the haunted house.", "As expected...");
                        switch (Message_TextSelect()){
                            case 0:
                            var1 = 1;
                            Character_ChFace(1, 2, 0);
                            Message_ResumeSkinship();
                            Voice_PlayVoice("B0301230_A03500", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "... Seriously?\nHey, even the ferris wheel is fine,\nso let's just ride that, okay?");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 2, 5);
                            Character_BlinkStart(1, 2, (#1), 2);
                            Character_ChFace(1, 3, 4);
                            Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0301230_A03600", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "This place was always closed.\nThere's a rumor that a real...");
                            Character_ChFace(1, 2, 0);
                            Character_BlinkStart(1, 2, (#1), 2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0301230_A03700", #1, "");
                            Message_Who(1);
                            Message_MsgDisp("Saeki", "Okay.\nEven the merry-go-round is fine....\nSo will you stop?");
                            Message_CloseMsg();
                            Character_Chara_GS2(1, "NON");
                            Music_StopBGM(0, 40);
                            Environment_StopME(0, 40);
                            Graphic_OpenAnim(46, 0, 1);
                            Screen_WipeOut(2);
                            Screen_ClearScreen();
                            System_Call_GS2("B04", "M1", 234);
                            break ;
                            case 1:
                            break ;
                            }
                        break ;
                        }
                    break ;
                    }
                }
            }
        else if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0301230_A03800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... So, what should we do?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 3);
                    Character_ChFace(1, 3, 0);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0301230_A03900", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Okay. Let's do that.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                    Character_ChFace(1, 2, 3);
                    Character_ChFace(1, 3, 4);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0301230_A04000", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "You do know we're sitting at the\nvery front, right?");
                    Message_CloseMsg();
                    Character_Chara_GS2(1, "NON");
                    Music_StopBGM(0, 40);
                    Environment_StopME(0, 40);
                    Graphic_OpenAnim(43, 0, 1);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M1", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 2, 3);
                    Character_ChFace(1, 3, 5);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0301230_A04100", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Got it. Let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                    Character_ChFace(1, 2, 2);
                    Character_ChFace(1, 3, 3);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0301230_A04200", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "This is...\nWhen I was a child, this seemed\nreally large.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(1, "NON");
                    Music_StopBGM(0, 40);
                    Environment_StopME(0, 40);
                    Graphic_OpenAnim(44, 0, 1);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M1", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's go to the haunted house.", "As expected...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(1, 2, (#1), 2);
                        Character_ChFace(1, 3, 1);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0301230_A04300", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Alright. It's fine.\nIt's better than that other thing...");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                        Character_ChFace(1, 3, 1);
                        Character_ChFace(1, 2, 5);
                        Character_BlinkStart(1, 2, (#1), 2);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0301230_A04400", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "I thought so...\nAs expected, it has an effect on you\nwhen you look at it from up close...");
                        Message_CloseMsg();
                        Character_Chara_GS2(1, "NON");
                        Music_StopBGM(0, 40);
                        Environment_StopME(0, 40);
                        Graphic_OpenAnim(45, 0, 1);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M1", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(1, 2, (#1), 2);
                        Character_ChFace(1, 3, 1);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0301230_A04500", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Hey, of all things, you want to ride\nthat no matter what?");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(1, 3, (#1), 2);
                        Character_ChFace(1, 3, 4);
                        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0301230_A04600", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Something will surely come at us...\nI know that much.");
                        Message_CloseMsg();
                        Character_Chara_GS2(1, "NON");
                        Music_StopBGM(0, 40);
                        Environment_StopME(0, 40);
                        Graphic_OpenAnim(46, 0, 1);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M1", 234);
                        break ;
                        case 2:
                        break ;
                        }
                    break ;
                    }
                }
            }
        }
    else if ((Date_ChkDateOpen(73) == 1) && (Date_ChkDateOpen(71) == 0) && (var3 == 0)){
        if ((Date_ChkDateOpen(74) == 0) && (Date_ChkDateOpen(75) == 0) && (Date_ChkDateOpen(76) == 0)){
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301230_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... So, what should we do?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 4);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0301230_A01100", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Right. As expected. Alright.\nLet's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                    Character_ChFace(1, 2, 3);
                    Character_BlinkStart(1, 3, (#1), 2);
                    Character_ChFace(1, 3, 1);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0301230_A01200", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "You have to wait quite a while for\nthis...\nWell, I guess that's what makes it\nso good.");
                    Message_CloseMsg();
                    Character_Chara_GS2(1, "NON");
                    Music_StopBGM(0, 40);
                    Environment_StopME(0, 40);
                    Graphic_OpenAnim(43, 0, 1);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M1", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 2, 3);
                    Character_ChFace(1, 3, 1);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0301230_A01300", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Alright.\nWell, it's better than that other\nthing.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                    Character_ChFace(1, 2, 3);
                    Character_BlinkStart(1, 2, (#1), 2);
                    Character_ChFace(1, 3, 1);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0301230_A01400", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "As usual, it's compact...");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(1, "NON");
                    Music_StopBGM(0, 40);
                    Environment_StopME(0, 40);
                    Graphic_OpenAnim(44, 0, 1);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M1", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's drive on the go-carts.", "As expected...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(1, 2, (#1), 2);
                        Character_ChFace(1, 3, 4);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0301230_A01500", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "...");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                        Character_ChFace(1, 2, 3);
                        Character_BlinkStart(1, 2, (#1), 2);
                        Character_ChFace(1, 3, 4);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0301230_A01600", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Let's ride it when there aren't so\nmany people around.\nOkay?");
                        Message_CloseMsg();
                        Character_Chara_GS2(1, "NON");
                        Music_StopBGM(0, 40);
                        Environment_StopME(0, 40);
                        Graphic_OpenAnim(45, 0, 1);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M1", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 2, 3);
                        Character_ChFace(1, 3, 0);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0301230_A01700", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "Let's do that!");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                        Character_ChFace(1, 2, 4);
                        Character_ChFace(1, 3, 3);
                        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0301230_A01800", #1, "");
                        Message_Who(1);
                        Message_MsgDisp("Saeki", "It looks like the real thing...\nAlright, I'll show you my top speed!");
                        Message_CloseMsg();
                        Character_Chara_GS2(1, "NON");
                        Music_StopBGM(0, 40);
                        Environment_StopME(0, 40);
                        Graphic_OpenAnim(47, 0, 1);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M1", 235);
                        break ;
                        case 2:
                        break ;
                        }
                    break ;
                    }
                }
            }
        else if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301230_A01900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... So, what should we do?");
            Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "I want to ride the merry-go-round.");
            switch (Message_TextSelect()){
                case 0:
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0301230_A02000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Okay. Let's do that.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0301230_A02100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I wonder if we can sit at the very\nfront...\nWhy don't you pretend to be a junior\nschool kid and jump the line?");
                Message_CloseMsg();
                Character_Chara_GS2(1, "NON");
                Music_StopBGM(0, 40);
                Environment_StopME(0, 40);
                Graphic_OpenAnim(43, 0, 1);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M1", 231);
                break ;
                case 1:
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0301230_A02200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "The ferris wheel, huh...\nAnything is better than that other\nthing.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(1, 3, 0);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0301230_A02300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No matter how I look at it, it's\ncompact.\nIt kinda feels cosy.");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                Message_CloseMsg();
                Character_Chara_GS2(1, "NON");
                Music_StopBGM(0, 40);
                Environment_StopME(0, 40);
                Graphic_OpenAnim(44, 0, 1);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M1", 232);
                break ;
                case 2:
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(1, 3, (#1), 2);
                Character_ChFace(1, 3, 1);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0301230_A02400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "...\nWe can't do something else, can we?\nI thought not...");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(1, 0, (#1), 2);
                Character_ChFace(1, 3, 5);
                Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0301230_A02500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Can't we just look at it?");
                Message_CloseMsg();
                Character_Chara_GS2(1, "NON");
                Music_StopBGM(0, 40);
                Environment_StopME(0, 40);
                Graphic_OpenAnim(45, 0, 1);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M1", 233);
                break ;
                }
            }
        }
    else if (var3 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0301230_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... So, what should we ride?");
        Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "I want to ride the merry-go-round.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301230_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Oh, that's a good idea. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301230_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I wonder if we can sit at the very\nfront.");
            Message_CloseMsg();
            Character_Chara_GS2(1, "NON");
            Music_StopBGM(0, 40);
            Environment_StopME(0, 40);
            Graphic_OpenAnim(43, 0, 1);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 231);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301230_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "The ferris wheel, huh.\nWell, it's fine, but...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301230_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "But these days, it's somewhat\ncompact...");
            SoundEffect_PlayStream(3, "SS_T_00_231_M00");
            Message_CloseMsg();
            Character_Chara_GS2(1, "NON");
            Music_StopBGM(0, 40);
            Environment_StopME(0, 40);
            Graphic_OpenAnim(44, 0, 1);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 232);
            break ;
            case 2:
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301230_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're kidding...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301230_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm just making sure...\nYou want to ride that, right?");
            Message_CloseMsg();
            Character_Chara_GS2(1, "NON");
            Music_StopBGM(0, 40);
            Environment_StopME(0, 40);
            Graphic_OpenAnim(45, 0, 1);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 233);
            break ;
            }
        }
    if (Date_ChkDateOpen(72) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Background_Bg_GS2("BG_TR501_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0301230_A05100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That reminds me, there's a night\nparade on at this time.");
        Voice_PlayVoice("B0301230_A05200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go see it. Okay?");
        Message_MsgSel("Yeah, I want to see it.", "Sorry, I kind of can't today...");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301230_A05300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Alright. Let's go!");
            Message_CloseMsg();
            Music_StopBGM(0, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 236);
            Date_NightDate(0, 1);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0301230_A05400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Is that so... Well, it is late.\nYou might get yelled at by your\nmommy, right?");
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
