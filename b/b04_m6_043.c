section "b04_m6_043"{
    Background_Bg_GS2("BG_WF430_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MN_B_SC_920_000");
    Screen_WipeIn(2);
    System_TouchWait();
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    SoundEffect_StopStream(2, 40);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes, it really was!\nIt's good we came.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Uh-huh! It was really exciting!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            }
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I think so, too.\nJust as I thought, Senpai and I get\nalong well.");
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
            Voice_PlayVoice("B0406040_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, it was exciting!\nEspecially the end!!");
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
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0406040_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So...? I liked it very much...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        else {
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(6, 2, (#1), 1);
            Voice_PlayVoice("B0406040_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Huh, how come?\nIt was very interesting!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        break ;
        }
    }
