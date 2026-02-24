section "b04_m6_044"{
    Background_Bg_GS2("BG_WF440_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MN_E_SC_931_D00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_BlinkStart(6, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes. I was quite crazy about it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(6, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I agree with you!\nIt was quite exciting!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is that so?\nI was quite absorbed in it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It was fairly exciting.\nI was able to enjoy it.\nIt was good we came.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0406040_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So...?\nI was quite absorbed as I watched...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        else {
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0406040_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Huuuh!?\nWhy were you unhappy with it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        break ;
        }
    }
