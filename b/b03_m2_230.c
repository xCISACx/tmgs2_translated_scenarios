section "b03_m2_230"{
    int var0 = 0;
    int var1 = 0;
    int var2;
    int var3;
    System_GlobalWork(0, 0, 0);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        var2 = 1;
        }
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
        Message_Who(0);
        Message_MsgDisp("主人公", "(That reminds me, I think the races\nare on today.)");
        Message_MsgSel("Ask to go see the race.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0302230_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, it looks interesting.\nLet's go check it out.");
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
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0302230_B01800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... We made it just in time.\nIt looks like it's starting.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            var3 = 1;
            System_Call_GS2("B04", "M2", 237);
            break ;
            case 1:
            Message_PauseSkinship();
            Voice_PlayVoice("B0302230_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Let's buy a free pass...\nLet's go in.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            break ;
            }
        }
    else {
        Message_PauseSkinship();
        Voice_PlayVoice("B0302230_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Let's buy a free pass...\nLet's go in.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        }
    if ((Date_ChkDateOpen(73) == 0) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0302230_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "So, where do you want to go?");
        while (var1 == 0){
            Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
            switch (Message_TextSelect()){
                case 0:
                var1 = 1;
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0302230_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah, let's do that.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(2, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0302230_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Let's go.");
                Message_CloseMsg();
                Character_Chara_GS2(2, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(43, 0, 2);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M2", 231);
                break ;
                case 1:
                var1 = 1;
                Character_ChFace(1, 0, 3);
                Character_ChFace(1, 2, 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0302230_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Is this... fun?");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0302230_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Look, it's here.");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                Message_CloseMsg();
                Character_Chara_GS2(2, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(44, 0, 2);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M2", 232);
                break ;
                case 2:
                Message_MsgSel("I want to ride the merry-go-round.", "Let's go to the haunted house.", "As expected...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 0, 9);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0302230_B04800", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Seriously?");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 8);
                    Character_ChFace(1, 3, 2);
                    Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0302230_B04900", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "It looks like you're serious...\nIt's fine, I'll take it as a serious\nchallenge then.");
                    Message_CloseMsg();
                    Character_Chara_GS2(2, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(45, 0, 2);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M2", 233);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 2, 0);
                    Character_ChFace(1, 3, 3);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0302230_B05300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "You've got guts.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_ChFace(1, 0, 11);
                    Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0302230_B03800", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...? Don't stop there.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uh...\n｛Shiba＊＊｝, will you walk\nclose to me?");
                    Character_ChFace(1, 2, 0);
                    Character_BlinkStart(2, 2, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Voice_PlayVoice("B0302230_B03900", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "... Will I?");
                    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 10);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0302230_B04000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "I'm joking.\nRelax, I'll be right beside you.");
                    Message_CloseMsg();
                    Character_Chara_GS2(2, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(46, 0, 2);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M2", 234);
                    break ;
                    case 2:
                    break ;
                    }
                break ;
                }
            }
        }
    else if ((Date_ChkDateOpen(73) == 1) && (Date_ChkDateOpen(71) == 1) && (var3 == 0)){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        if ((Date_ChkDateOpen(74) == 0) && (Date_ChkDateOpen(75) == 0) && (Date_ChkDateOpen(76) == 0)){
            Voice_PlayVoice("B0302230_B02900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So, where should we go?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 0, 10);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0302230_B03000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Yeah, let's do that.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 3);
                    Character_ChFace(1, 3, 3);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0302230_B03100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Let's go.");
                    Message_CloseMsg();
                    Character_Chara_GS2(2, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 2);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M2", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 0, 9);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0302230_B03200", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", ".........\n*Sigh*");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 3);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0302230_B03300", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "...\nI guess nothing can be done about\nit...");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(2, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 2);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M2", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's drive on the go-carts.", "As expected...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 0, 3);
                        Character_ChFace(1, 2, 2);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0302230_B03400", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "......... Are you serious?");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                        Character_ChFace(1, 0, 9);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0302230_B03500", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "I......\nI guess I have no choice but to\nprepare myself for the worst...");
                        Message_CloseMsg();
                        Character_Chara_GS2(2, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 2);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M2", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 2, 0);
                        Character_ChFace(1, 3, 3);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0302230_B03600", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "Ah, alright. Let's go.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                        Character_BlinkStart(2, 0, (#1), 2);
                        Character_ChFace(1, 3, 4);
                        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0302230_B03700", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "Should we have a competiton?");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Eh～, I can't win against you,\n｛Shiba＊＊｝...");
                        Message_CloseMsg();
                        Character_Chara_GS2(2, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(47, 0, 2);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M2", 235);
                        break ;
                        case 2:
                        Message_MsgSel("Let's go to the haunted house.", "As expected...");
                        switch (Message_TextSelect()){
                            case 0:
                            var1 = 1;
                            Message_ResumeSkinship();
                            Voice_PlayVoice("B0302230_B02600", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "Ah, alright.");
                            Message_CloseMsg();
                            Screen_WipeOut(2);
                            Character_ChFace(1, 0, 11);
                            Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                            Screen_WipeIn(2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0302230_B02700", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... What's wrong?\nYou're not going in?");
                            Message_Who(0);
                            Message_MsgDisp("主人公", "U-Umm...\n｛Shiba＊＊｝, will you go\nin first?");
                            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                            Character_ChFace(1, 0, 10);
                            Character_BlinkStart(2, 2, (#1), 2);
                            Message_PauseSkinship();
                            Voice_PlayVoice("B0302230_B02800", #1, "");
                            Message_Who(2);
                            Message_MsgDisp("Shiba", "... Ehh. So you're scared...");
                            Message_CloseMsg();
                            Character_Chara_GS2(2, "NON");
                            Environment_StopME(0, 40);
                            Music_StopBGM(0, 40);
                            Graphic_OpenAnim(46, 0, 2);
                            Screen_WipeOut(2);
                            Screen_ClearScreen();
                            System_Call_GS2("B04", "M2", 234);
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
            Voice_PlayVoice("B0302230_B04300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... What should we do?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 0);
                    Character_ChFace(1, 3, 3);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0302230_B04400", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Okay.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 3);
                    Character_ChFace(1, 3, 3);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0302230_B04500", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Sitting at the very front is\nbetter...");
                    Message_CloseMsg();
                    Character_Chara_GS2(2, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 2);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M2", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 0, 3);
                    Character_ChFace(1, 2, 2);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0302230_B04600", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "*Sigh*...\nNo matter how many times I do crappy\nthings, I can't get used to it...");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 9);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0302230_B04700", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "It's here.........");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(2, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 2);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M2", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's go to the haunted house.", "As expected...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(0, 0, 9);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0302230_B04800", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Are you serious?");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                        Character_ChFace(1, 0, 8);
                        Character_ChFace(1, 3, 2);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0302230_B04900", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "It looks like you're serious...\nIt's fine, I'll take it as a serious\nchallenge then.");
                        Message_CloseMsg();
                        Character_Chara_GS2(2, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 2);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M2", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 2, 0);
                        Character_ChFace(1, 3, 3);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0302230_B05300", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "You've got guts.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_ChFace(1, 0, 11);
                        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0302230_B03800", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "...? Don't stop there.");
                        Message_Who(0);
                        Message_MsgDisp("主人公", "Uh...\n｛Shiba＊＊｝, will you walk\nclose to me?");
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(2, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Voice_PlayVoice("B0302230_B03900", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "... Will I?");
                        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                        Character_ChFace(1, 0, 10);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0302230_B04000", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "I'm joking.\nRelax, I'll be right beside you.");
                        Message_CloseMsg();
                        Character_Chara_GS2(2, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(46, 0, 2);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M2", 234);
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
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0302230_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So, where should we go?");
            while (var1 == 0){
                Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "Or...");
                switch (Message_TextSelect()){
                    case 0:
                    var1 = 1;
                    Character_ChFace(1, 2, 0);
                    Character_ChFace(1, 3, 3);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0302230_B00900", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Yeah, let's do that.");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                    Character_ChFace(1, 2, 5);
                    Character_BlinkStart(2, 3, (#1), 2);
                    Character_ChFace(1, 3, 3);
                    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0302230_B01000", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Let's go.");
                    Message_CloseMsg();
                    Character_Chara_GS2(2, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(43, 0, 2);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M2", 231);
                    break ;
                    case 1:
                    var1 = 1;
                    Character_ChFace(1, 0, 3);
                    Character_ChFace(1, 2, 2);
                    Message_ResumeSkinship();
                    Voice_PlayVoice("B0302230_B01100", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Is this... fun?");
                    Message_CloseMsg();
                    Screen_WipeOut(2);
                    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                    Character_ChFace(1, 0, 3);
                    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                    Screen_WipeIn(2);
                    Message_PauseSkinship();
                    Voice_PlayVoice("B0302230_B01200", #1, "");
                    Message_Who(2);
                    Message_MsgDisp("Shiba", "Come on, it's here.");
                    SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                    Message_CloseMsg();
                    Character_Chara_GS2(2, "NON");
                    Environment_StopME(0, 40);
                    Music_StopBGM(0, 40);
                    Graphic_OpenAnim(44, 0, 2);
                    Screen_WipeOut(2);
                    Screen_ClearScreen();
                    System_Call_GS2("B04", "M2", 232);
                    break ;
                    case 2:
                    Message_MsgSel("I want to ride the merry-go-round.", "Let's drive on the go-carts.", "As expected...");
                    switch (Message_TextSelect()){
                        case 0:
                        var1 = 1;
                        Character_ChFace(1, 0, 3);
                        Character_ChFace(1, 2, 2);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0302230_B01300", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "............ No.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                        Character_ChFace(1, 0, 9);
                        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0302230_B01400", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "Hey, as expected......\nNo, I've already passed the\ndeadline...");
                        Message_CloseMsg();
                        Character_Chara_GS2(2, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(45, 0, 2);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M2", 233);
                        break ;
                        case 1:
                        var1 = 1;
                        Character_ChFace(1, 2, 0);
                        Character_ChFace(1, 3, 3);
                        Message_ResumeSkinship();
                        Voice_PlayVoice("B0302230_B01500", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "That's a good idea. Let's go.");
                        Message_CloseMsg();
                        Screen_WipeOut(2);
                        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                        Character_ChFace(1, 2, 0);
                        Character_BlinkStart(2, 2, (#1), 2);
                        Character_ChFace(1, 3, 3);
                        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
                        Screen_WipeIn(2);
                        Message_PauseSkinship();
                        Voice_PlayVoice("B0302230_B01600", #1, "");
                        Message_Who(2);
                        Message_MsgDisp("Shiba", "Eh...\nYou can go quite fast on this thing.");
                        Message_CloseMsg();
                        Character_Chara_GS2(2, "NON");
                        Environment_StopME(0, 40);
                        Music_StopBGM(0, 40);
                        Graphic_OpenAnim(47, 0, 2);
                        Screen_WipeOut(2);
                        Screen_ClearScreen();
                        System_Call_GS2("B04", "M2", 235);
                        break ;
                        case 2:
                        break ;
                        }
                    break ;
                    }
                }
            }
        else if ((Date_ChkDateOpen(74) == 1) || (Date_ChkDateOpen(75) == 1) || (Date_ChkDateOpen(76) == 1)){
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0302230_B01900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So... What should we do?");
            Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "I want to ride the merry-go-round.");
            switch (Message_TextSelect()){
                case 0:
                Message_ResumeSkinship();
                Voice_PlayVoice("B0302230_B02000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah, alright.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0302230_B02100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Let's ride it, then.");
                Message_CloseMsg();
                Character_Chara_GS2(2, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(43, 0, 2);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M2", 231);
                break ;
                case 1:
                Character_ChFace(1, 0, 9);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0302230_B02200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Okay.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0302230_B02300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Hey, watch your step.");
                SoundEffect_PlayStream(3, "SS_T_00_231_M00");
                Message_CloseMsg();
                Character_Chara_GS2(2, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(44, 0, 2);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M2", 232);
                break ;
                case 2:
                Character_ChFace(1, 0, 9);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0302230_B02400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... Are you serious?");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_ChFace(1, 3, 0);
                Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0302230_B02500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I......\nI guess I have no choice but to\nprepare myself for the worst...");
                Message_CloseMsg();
                Character_Chara_GS2(2, "NON");
                Environment_StopME(0, 40);
                Music_StopBGM(0, 40);
                Graphic_OpenAnim(45, 0, 2);
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M2", 233);
                break ;
                }
            }
        }
    else if (var3 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0302230_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... So, what should we do?");
        Message_MsgSel("The roller coaster would be nice.", "Let's ride the ferris wheel.", "I want to ride the merry-go-round.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302230_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, let's do that.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0302230_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah.\nKeep a tight hold of your things.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yes.");
            Message_CloseMsg();
            Character_Chara_GS2(2, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(43, 0, 2);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 231);
            break ;
            case 1:
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302230_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "......... This.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0302230_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Hey, watch your step.");
            SoundEffect_PlayStream(3, "SS_T_00_231_M00");
            Message_CloseMsg();
            Character_Chara_GS2(2, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(44, 0, 2);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 232);
            break ;
            case 2:
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302230_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "......... No.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0302230_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Are you serious... *Sigh*...");
            Message_CloseMsg();
            Character_Chara_GS2(2, "NON");
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Graphic_OpenAnim(45, 0, 2);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 233);
            break ;
            }
        }
    if (Date_ChkDateOpen(72) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0302230_B05000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "There's a night parade.\nDo you want to watch it?");
        Message_MsgSel("Yes, I do.", "Not today...");
        switch (Message_TextSelect()){
            case 0:
            Message_PauseSkinship();
            Voice_PlayVoice("B0302230_B05100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Let's go watch it.\nIt would be nice if there were still\nsome good spots left...");
            Message_CloseMsg();
            Music_StopBGM(0, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 236);
            Date_NightDate(0, 1);
            break ;
            case 1:
            Message_PauseSkinship();
            Voice_PlayVoice("B0302230_B05200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Is that okay with you?\nIf it is, then let's go home.");
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
