section "b03_m7_030"{
    if (Date_ChkDateOpen(5) == 0){
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0307030_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Please line up, everyone.\nLet's go inside.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M7", 31);
        }
    else if (Date_ChkDateOpen(5) == 1){
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0307030_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "The Orca Show is being held...\nIt's good we made it today!");
        Message_Who(0);
        Message_MsgDisp("主人公", "You know Sensei, as expected, you\nshould have asked us what we wanted\nto see.");
        SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0307030_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Is that so?\nWell then, let majority rule.\nEveryone, where would you like to\ngo?");
        Message_MsgSel("I raise my hand for the Aquarium.", "I raise my hand for the Orca Show.");
        switch (Message_TextSelect()){
            case 0:
            Message_PauseSkinship();
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(7, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0307030_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It can't be helped, I am an adult\nand a teacher.\nWe will follow as majority ruled.");
            Message_ResumeSkinship();
            Character_BlinkStart(7, 0, (#1), 2);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Voice_PlayVoice("B0307030_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well, let's go inside.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M7", 31);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0307030_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Majority rules!\nThe Orca Show was decided!");
            SoundEffect_PlayStream(2, "SS_DSE_097_000");
            Message_ResumeSkinship();
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0307030_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'm excited. Everyone, let's hurry!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M7", 32);
            break ;
            }
        }
    }
