section "q21_g3_000"{
    SoundEffect_PlayStream(2, "SE_GAYA_MAKURA_FAR");
    Background_Bg_GS2("BG_SCB10_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Seems like the boys' quarters are\nin a riot...)");
    Voice_PlayVoice("Q2112000_L00000", #1, "Q2112000_L00001");
    Message_Who(12);
    Message_MsgDisp("Nishimoto", "Oh, ｛主人公｝. Found ya!");
    Character_ChFace(0, 0, 10);
    Character_Chara_GS2(12, "G3_08F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "What's up, ｛Nishimoto＊＊｝?");
    Character_BlinkStart(12, 3, (#1));
    Voice_PlayVoice("Q2112000_L00100", #1, "");
    Message_Who(12);
    Message_MsgDisp("Nishimoto", "Seems like the boys' quarters are\nhaving a game.\nWould you care for a peek?");
    Message_MsgSel("Okay! I'm coming with you!", "Nah, I'd rather not...");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(12, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q2112000_L00200", #1, "Q2112000_L00201");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "As expected, ｛主人公｝!\nI think we should go together.\nThen let's hurry before we get\ncaught!");
        break ;
        case 1:
        Character_ChFace(0, 0, 11);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("Q2112000_L00300", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Eeh, what? Why?\nI was waiting for something fun...\nWouldn't it be a waste not to?");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("Q2112000_L00400", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "T...That's no good! Running away!");
        Character_Chara_GS2(12, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        System_GlobalWork(7, 2, 1);
        break ;
        }
    SoundEffect_StopStream(2, 40);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(12, 86, 1);
    }
