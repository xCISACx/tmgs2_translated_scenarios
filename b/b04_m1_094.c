section "b04_m1_094"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
    Character_ChFace(0, 0, 9);
    Background_Bg_GS2("BG_FP440_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_440_000", 127, 40);
    Voice_PlayVoice("B0401094_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I don't like this kind of horror...");
    Message_MsgSel("Wow, what a coward!", "I wonder what kind of person \"Gagi\" was.", "I don't like it either.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 2, (#1), 1);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0401094_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Shut up.\nI don't like disgusting things.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 5);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401094_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "...\nThe actual person is probably like\ntheir own works.\nI don't want to ever meet them.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401094_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I see.\nLet's look around for a bit before\nwe go drink some coffee.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
