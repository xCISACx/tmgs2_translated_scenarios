section "b04_m1_095"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
    Character_ChFace(0, 2, 4);
    Character_BlinkStart(1, 2, (#1));
    Character_ChFace(0, 3, 5);
    Background_Bg_GS2("BG_FP450_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_450_000", 127, 40);
    Voice_PlayVoice("B0401095_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "This artist is a graduate from\nHabataki Academy, right?\nApparently, he's been overseas this\nwhole time.");
    Message_MsgSel("It's extremely beautiful!", "They're quite a strange person, huh?", "Apparently he's really rich!");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0401095_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Girls always say that, don't they?\nSince it's an artist's work, try\nevaluating their work instead.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401095_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well, that's the kinda feeling I get\nwhen I look at this stuff.\nI wonder what kind of guy he\nactually is.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401095_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah, but apparently he went\nbackpacking.\nHe could unexpectedly be the wild\ntype...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
