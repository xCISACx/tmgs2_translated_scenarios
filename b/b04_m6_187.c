section "b04_m6_187"{
    Background_Bg_GS2("BG_NE691_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_234_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That movie was the best!", "That movie was so-so.", "That movie was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("B0406180_F02400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh... R-Really?\nYou saying that is a little...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0406180_F02500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Huh, that?\nI'll try to agree with Senpai's\nopinion.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            }
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0406180_F02600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Really?\nI thought it was quite bad...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0406180_F02700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'll let you pass.\nHow should I put this?\nIt was a waste of time...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406180_F02800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I think so too.\nIt was a waste of my time.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406180_F02900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You're right, it fell short.\nIf we leave early, we can go\nsomewhere else!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        }
    }
