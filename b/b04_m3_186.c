section "b04_m3_186"{
    Background_Bg_GS2("BG_NE690_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_234_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That movie was the best!", "That movie was so-so.", "That movie was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(3, 2, (#1), 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0403186_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nI thought it was the best example of\na poor piece of writing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403186_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Ah, right.\nIt was just right to take my mind\noff things.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_BlinkStart(3, 2, (#1), 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403186_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Apart from the good things, it was\ndisappointing...\nIf you think that way, then I guess\nyou could say that.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
