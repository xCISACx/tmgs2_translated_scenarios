section "b03_m7_020"{
    if (Date_GetDateOption(5)){
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0307020_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Now, where to today...\nIs the tour boat completed? It is!");
        Message_Who(0);
        Message_MsgDisp("主人公", "You know, Sensei...\nAs expected, you should probably\nhave listened to the wishes of\neveryone else.");
        SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0307020_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "That may be so.\nSo let's decide by majority rule.\nSightseeing cruise?");
        Message_MsgSel("I raise my hand for the Brick Pathway.", "I raise my hand for the BSB Observatory.", "I raise my hand for the cruise.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(7, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0307020_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The Brick Pathway...\nOkay, Sensei will be an adult about\nthis.\nFollow me everyone.");
            Message_ResumeSkinship();
            Character_ChFace(1, 3, 2);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(7, 0, (#1), 2);
            Voice_PlayVoice("B0307020_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well then, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M7", 21);
            break ;
            case 1:
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(7, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0307020_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The mayhem of democracy...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sensei is here early. Let's go.");
            Message_ResumeSkinship();
            Character_ChFace(1, 0, 9);
            Character_BlinkStart(7, 2, (#1), 2);
            Voice_PlayVoice("B0307020_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Sightseeing cruise...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M7", 23);
            break ;
            case 2:
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0307020_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Majority rules!\nThe decision is the sightseeing\ncruise!");
            SoundEffect_PlayStream(2, "SS_DSE_097_000");
            Message_ResumeSkinship();
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0307020_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Now everyone, make a dash to board\nthe pier!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M7", 25);
            break ;
            }
        }
    else {
        System_Call_GS2("B03", "M7", 21);
        }
    }
