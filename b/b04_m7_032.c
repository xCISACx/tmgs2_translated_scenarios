section "b04_m7_032"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(7, 2, (#1));
    Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
    Voice_PlayVoice("B0407032_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Are there any whales wailing?\nAh, those whales are wailing! ...\nJust kidding.");
    Message_MsgSel("... You spent ages thinking up that joke?", "\"Just kidding\" is completely obsolete.", "You can make a dolphin version, too.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 0, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407032_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Did you really just say that?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(7, 3, (#1), 1);
        Voice_PlayVoice("B0407032_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I failed.... Is that also obsolete?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407032_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, you read me.\nIf you liked it, I plan on making\nmore.\nIs there a dolphin? Are they here?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
