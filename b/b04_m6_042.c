section "b04_m6_042"{
    Background_Bg_GS2("BG_WF420_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_092_000");
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
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(6, 2, (#1), 1);
        Character_ChFace(0, 3, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406040_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Huh... Really? To me it was kinda...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        else {
            Voice_PlayVoice("B0406040_F01900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, really? I wonder how it passed?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F02000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I didn't like it very much,\nthough...\nI hope you can forgive me, yeah?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F02100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "But, I didn't like it.\nI hope this is OK... Yeah?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        case 2:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 3, 5);
            Character_ChFace(1, 2, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F02200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, do you think so, too?\nIt's obviously lacking, however.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F02300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh yes!\nIt wasn't that good, especially the\nend.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        }
    }
