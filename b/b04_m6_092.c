section "b04_m6_092"{
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Character_ChFace(0, 2, 4);
    Character_BlinkStart(6, 2, (#1));
    Character_ChFace(0, 3, 3);
    Background_Bg_GS2("BG_FP420_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_420_000", 127, 40);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("B0406090_F02900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Look at this glass, please.\nThe design is elaborate and\nbeautiful...");
        }
    else {
        Voice_PlayVoice("B0406090_F03000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hey, look at this glass!\nThe pattern is detailed, the design\nis also nice, and it's beautiful,\ntoo...");
        }
    Message_MsgSel("It seems I'm able to drink delicious juice.", "It seems breakable and un-usable.", "A mug is more convenient.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F03100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is that so.\nWell, I would want to drink in such\na glass, just once.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F03200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Uh-huh.\nI'd want to drink in such a glass.\nJust once is good enough.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Character_ChFace(1, 2, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F03300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ahaha! It seems that way, Senpai.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F03400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ahaha! It seems that way, Senpai.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0406090_F03500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Really.\nWell, it's not easy to break.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0406090_F03600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nYou know, that doesn't tell much of\na story.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
