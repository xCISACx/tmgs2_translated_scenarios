section "b04_m6_093"{
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP430_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_430_000", 127, 40);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("B0406090_F03700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "These dinosaur bones are huge!\nIt's like a set for a movie.");
        }
    else {
        Voice_PlayVoice("B0406090_F03800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "This dinosaur bone is huge!\nIt's like a set for a movie.");
        }
    Message_MsgSel("It's like it's going to move any moment.", "Well then, I'm the heroine of the movie!", "I wonder what they ate to grow so large?");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F03900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It would be really amazing if they\ncame to life.\nCan you imagine seeing it?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F04000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Uh-huh!\nIf the dinosaur bones started to\nmove they'd attack!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0406090_F04100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Umm...\nHow should I comment on that?...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0406090_F04200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Well.\nIt'd be a bother to comment on you\nsaying something like that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F04300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Even herbivores seemed to grow quite\nlarge, I guess it depends on the\ntype...\nDinosaurs are a mystery.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406090_F04400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "If it's this large, it probably\nswallowed many things whole.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
