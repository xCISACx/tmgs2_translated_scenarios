section "b04_m6_182"{
    Background_Bg_GS2("BG_NE640_CO_0", #1, #1, 0);
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
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406180_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes.\nI was quite engrossed in it as I\nwatched.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406180_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Uh-huh! It was quite interesting!");
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
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406180_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is that so? Well, I was happy.\nIt was we watched it!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406180_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is that so? Well, I was happy.\nI'm glad we watched it!");
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
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 4);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406180_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So...? I was able to enjoy it...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        else {
            Voice_PlayVoice("B0406180_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "What!?\nWhat were you dissatisfied about?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        break ;
        }
    }
