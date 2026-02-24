section "b04_m7_187"{
    Background_Bg_GS2("BG_NE691_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_234_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Character_ChFace(0, 2, 2);
    Character_BlinkStart(7, 3, (#1));
    Character_ChFace(0, 3, 5);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0407187_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Ah～...... I slept well.");
    Message_MsgSel("Huh, it's a class trip though!?", "Want me to summarize it for you?", "I was sleepy, too.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(7, 3, (#1), 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0407187_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... I'm sorry.\nEven for a teacher, I carelessly\nforgot.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407187_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It was a little helpful.\nIt was a good thing you were here!");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 0, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407187_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I chose the movie by mistake.\nNext time I will think about one\nthat everyone can enjoy.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
