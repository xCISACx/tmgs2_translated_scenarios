section "b04_m2_093"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Character_ChFace(0, 0, 11);
    Background_Bg_GS2("BG_FP430_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_430_000", 127, 40);
    Voice_PlayVoice("B0402093_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... Intense.\nWhen I look at this, humanity's\nhistory is still so shallow...");
    Message_MsgSel("The ancient times were amazing.", "I want to try eating mammoth meat.", "I want to see a living dinosaur.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(1, 0, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0402093_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "But you couldn't say that we could\nlive in the same period as these\nguys did.");
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
        Voice_PlayVoice("B0402093_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nStop having food as the first thing\nthat comes to your mind.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(2, 2, (#1), 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0402093_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Me too.\nEven just seeing their bones is\nintense, so the real thing would\nsurely be awesome.");
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
