section "b03_m5_230"{
    int var0 = 0;
    int var1 = 0;
    int var2;
    int var3;
    System_GlobalWork(0, 0, 0);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        var2 = 1;
        }
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        Message_Who(0);
        Message_MsgDisp("主人公", "(That reminds me, I think the races\nare on today.)");
        Message_MsgSel("Ask to go see the race.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Voice_PlayVoice("B0305230_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm～...\nWell, since we're here, we might as\nwell go see it.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
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
            Message_PauseSkinship();
            Voice_PlayVoice("B0305230_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Seeing it up front will make your\nheart race, but it's better to see\nit from kind of far away.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            var3 = 1;
            System_Call_GS2("B04", "M5", 237);
            break ;
            case 1:
            Message_PauseSkinship();
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0305230_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We've bought a free pass, so let's\ngo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            break ;
            }
        }
    else {
        Message_PauseSkinship();
        Voice_PlayVoice("B0305230_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "We've bought a free pass, so let's\ngo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    if ((Date_ChkDateOpen(73) == 0) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        while (var1 == 0){
            Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
            switch (Message_TextSelect()){
                case 0:
                var1 = 1;
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0305230_E02700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Right. Hmm... Yeah, let's go...");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 1);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0305230_E02800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nThe people who just got off were\nstaggering...\nCrap, if I don't get into the mood\nthen...");
                Message_CloseMsg();
                Character_Chara_GS2(5, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(43, 0, 5);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M5", 231);
                break ;
                case 1:
                var1 = 1;
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(5, 3, (#1), 2);
                Voice_PlayVoice("B0305230_E02900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah. Let's go.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 0, 10);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0305230_E03000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "A slow, leisurely journey through\nthe sky.\nHow amazing.");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                Message_CloseMsg();
                Character_Chara_GS2(5, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(44, 0, 5);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M5", 232);
                break ;
                case 2:
                Message_MsgSel("I want to ride the merry-go-round.", "Let's go to the haunted house.", "As expected...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("B0305230_E04200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Right, let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 10);
                    Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0305230_E04300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Don't you think that a\nmerry-go-round is a ride of dreams?\nI love it.");
                    Message_CloseMsg();
                    Character_Chara_GS2(5, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(45, 0, 5);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M5", 233);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("B0305230_E04400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Yeah, let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_BlinkStart(5, 3, (#1), 2);
                    Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0305230_E04500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "The props in this attraction are\nreally good.");
                    Character_ChFace(1, 0, 10);
                    Character_BlinkStart(5, 3, (#1), 2);
                    Voice_PlayVoice("B0305230_E04600", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I want to take a photo...\nRather, I want to take the props\nhome with me...");
                    Message_CloseMsg();
                    Character_Chara_GS2(5, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(46, 0, 5);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M5", 234);
                    break ;
                    case 2:
                    break ;
                    }
                break ;
                }
            }
        }
    else if ((Date_ChkDateOpen(73) == 1) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if ((Date_ChkDateOpen(74) == 0) && (Date_ChkDateOpen(75) == 0) && (Date_ChkDateOpen(76) == 0)){
            Message_PauseSkinship();
            Voice_PlayVoice("B0305230_E02600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, what should we do?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 2);
                    Character_BlinkStart(5, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0305230_E02700", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Right. Hmm... Yeah, let's go...");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 2, 2);
                    Character_BlinkStart(5, 2, (#1), 2);
                    Character_ChFace(1, 3, 1);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0305230_E02800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "...\nThe people who just got off were\nstaggering...\nCrap, if I don't get into the mood\nthen...");
                    Message_CloseMsg();
                    Character_Chara_GS2(5, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 5);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M5", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    Character_BlinkStart(5, 3, (#1), 2);
                    Voice_PlayVoice("B0305230_E02900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Yeah. Let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 10);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0305230_E03000", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "A slow, leisurely journey through\nthe sky.\nHow amazing.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(5, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 5);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M5", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's drive on the go-carts.", "Or...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 0, 10);
                        Character_BlinkStart(5, 2, (#1), 2);
                        Voice_PlayVoice("B0305230_E03100", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Alright. Now then, let's go.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 10);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0305230_E03200", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "If I had a princess costume, I'd\ngive it to you.\nThen it would be more enjoyable.");
                        Message_CloseMsg();
                        Character_Chara_GS2(5, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 5);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M5", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 2, 2);
                        Character_BlinkStart(5, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Voice_PlayVoice("B0305230_E03300", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Right... Yeah, let's go.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 2, 5);
                        Character_BlinkStart(5, 3, (#1), 2);
                        Character_ChFace(1, 3, 4);
                        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0305230_E03400", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Ah, it's quite crowded.\nLet's go for a carefree drive.");
                        Message_CloseMsg();
                        Character_Chara_GS2(5, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(47, 0, 5);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M5", 235);
                        break ;
                        case 2:
                        Message_MsgSel("Let's go to the haunted house.", "As expected...");
                        switch (Message_TextSelect()){
                            case 0:
                            var1 = 1;
                            Character_ChFace(1, 0, 3);
                            Voice_PlayVoice("B0305230_E03500", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "Okay.");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 0, 10);
                            Character_BlinkStart(5, 3, (#1), 2);
                            Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0305230_E03600", #1, "");
                            Message_Who(5);
                            Message_MsgDisp("Chris", "Wah, it's really elaborate...\nIt looks like fun.");
                            Message_CloseMsg();
                            Character_Chara_GS2(5, "NON");
                            Environment_StopME(0, 40);
                            Music_StopBGM(0, 40);
                            Graphic_OpenAnim(46, 0, 5);
                            Screen_WipeOut(2);
                            Screen_ClearScreen();
                            System_Call_GS2("B04", "M5", 234);
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
            Message_PauseSkinship();
            Voice_PlayVoice("B0305230_E03700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What should we ride?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 2);
                    Character_BlinkStart(5, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0305230_E03800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "O-Okay...");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 2, 2);
                    Character_BlinkStart(5, 3, (#1), 2);
                    Character_ChFace(1, 3, 1);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0305230_E03900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... I'm really nervous...");
                    Message_CloseMsg();
                    Character_Chara_GS2(5, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 5);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M5", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("B0305230_E04000", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Yeah, let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 10);
                    Character_BlinkStart(5, 2, (#1), 2);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0305230_E04100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "It's here. Watch your step.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(5, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 5);
                    Environment_ResumeME(0);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M5", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's go to the Haunted House.", "As expected...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 0, 10);
                        Voice_PlayVoice("B0305230_E04200", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Right, let's go.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 10);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0305230_E04300", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Don't you think that a\nmerry-go-round is a ride of dreams?\nI love it.");
                        Message_CloseMsg();
                        Character_Chara_GS2(5, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M5", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 0, 10);
                        Voice_PlayVoice("B0305230_E04400", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Yeah, let's go.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_BlinkStart(5, 3, (#1), 2);
                        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0305230_E04500", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "The props in this attraction are\nreally good.");
                        Character_ChFace(1, 0, 10);
                        Voice_PlayVoice("B0305230_E04600", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "I want to take a photo...\nRather, I want to take the props\nhome with me...");
                        Message_CloseMsg();
                        Character_Chara_GS2(5, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(46, 0, 5);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M5", 234);
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
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305230_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Where should we go?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0305230_E01100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Yeah...\nAh, I'm a little more enthusiastic.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 3);
                    Character_BlinkStart(5, 2, (#1), 2);
                    Character_ChFace(1, 3, 0);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0305230_E01200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I wonder why everyone is raising\ntheir arms...\nHow strange...");
                    Message_CloseMsg();
                    Character_Chara_GS2(5, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 5);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M5", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    Voice_PlayVoice("B0305230_E01300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Yeah, let's go.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 10);
                    Character_BlinkStart(5, 3, (#1), 2);
                    Character_ChFace(1, 4, 1);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0305230_E01400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I've reserved a spot for you next to\nme▼ If it gets shaky and you get\nscared, come sit next to me, okay?");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(5, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 5);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M5", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's drive on the go-carts.", "As expected...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 0, 10);
                        Character_BlinkStart(5, 3, (#1), 2);
                        Voice_PlayVoice("B0305230_E01500", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "Yeah, let's ride it.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 10);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0305230_E01600", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "This merry-go-round has quite a good\natmosphere.\nI'm spellbound～.");
                        Message_CloseMsg();
                        Character_Chara_GS2(5, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 5);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M5", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 2, 2);
                        Character_BlinkStart(5, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Voice_PlayVoice("B0305230_E01700", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "...\nThese things can go quite fast...");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 2, 3);
                        Character_BlinkStart(5, 2, (#1), 2);
                        Character_ChFace(1, 3, 1);
                        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0305230_E01800", #1, "");
                        Message_Who(5);
                        Message_MsgDisp("Chris", "I just want to make sure that the\nbreak works...\nIt works fine, just fine.");
                        Message_CloseMsg();
                        Character_Chara_GS2(5, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(47, 0, 5);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M5", 235);
                        break ;
                        case 2:
                        break ;
                        }
                    break ;
                    }
                }
            }
        else if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305230_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, what should we do?");
            Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "I want to ride the merry-go-round.");
            switch (Message_TextSelect()){
                case 0:
                Character_ChFace(1, 0, 9);
                Voice_PlayVoice("B0305230_E02000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, yeah. Okay.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 0, 9);
                Character_BlinkStart(5, 2, (#1), 2);
                Character_ChFace(1, 3, 1);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0305230_E02100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... As expected, it's fast...");
                Message_CloseMsg();
                Character_Chara_GS2(5, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(43, 0, 5);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M5", 231);
                break ;
                case 1:
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0305230_E02200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah, let's ride it.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(5, 3, (#1), 2);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0305230_E02300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm so glad that we can spend time\nso leisurely, just the two of us.");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                Message_CloseMsg();
                Character_Chara_GS2(5, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(44, 0, 5);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M5", 232);
                break ;
                case 2:
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0305230_E02400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah, let's go.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(5, 2, (#1), 2);
                Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0305230_E02500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I've always liked merry-go-rounds.\nDon't you somewhat get excited?");
                Message_CloseMsg();
                Character_Chara_GS2(5, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(45, 0, 5);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M5", 233);
                break ;
                }
            }
        }
    else if (var3 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 5);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305230_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What do you want to ride?");
        Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "I want to ride the merry-go-round.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0305230_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ugh... Well, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305230_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... It's quite fast...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Right.");
            Message_CloseMsg();
            Character_Chara_GS2(5, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(43, 0, 5);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 231);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Voice_PlayVoice("B0305230_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305230_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I like the carefree feeling you get\non this ferris wheel.");
            SoundEffect_PlayStream(3, "SS_T_00_231_M00");
            Message_CloseMsg();
            Character_Chara_GS2(5, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(44, 0, 5);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 232);
            break ;
            case 2:
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Voice_PlayVoice("B0305230_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305230_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What should we do?\nWhat do you want to ride?\nAs expected, the white horse, right?");
            Message_CloseMsg();
            Character_Chara_GS2(5, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(45, 0, 5);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 233);
            break ;
            }
        }
    if (Date_ChkDateOpen(72) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305230_E04700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "There's a night parade on.\nSince we're here, do you wanna go\nwatch?");
        Message_MsgSel("Yeah, I want to watch.", "Sorry, I kind of can't today...");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305230_E04800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then I'll go find a spot where we\ncan see the parade well.");
            Message_CloseMsg();
            Music_StopBGM(0, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 236);
            Date_NightDate(0, 1);
            break ;
            case 1:
            Message_PauseSkinship();
            Character_ChFace(1, 0, 9);
            Message_PauseSkinship();
            Voice_PlayVoice("B0305230_E04900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Really? Let's go home then.");
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
