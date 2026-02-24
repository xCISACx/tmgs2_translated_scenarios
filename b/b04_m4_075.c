section "b04_m4_075"{
    int var0 = Date_GetDateOption(2, 22);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404075_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's Autumn～.");
        Message_MsgSel("The falling leaves are romantic.", "As expected, Fall is about sports!", "My appetite grows in Fall, as expected.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404075_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Really?\nEither way, I want to gather the\nfallen　leaves and clean them up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404075_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I prepare my stamina before a\nlive...\nJogging while looking at the Autumn\ncolors probably sounds good.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404075_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hahaha! Right you are.\nOnce it's Autumn, it's time for\nbaked sweet potatoes.\nI wonder if they're selling them\nsomewhere?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404075_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Once it's Autumn, the trees change\ncolors simultaneously.\nIt feels so strange.");
        Message_MsgSel("I want to sing.", "You can sense nature's mysteries.", "The color change is a loss of chlorophyll.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404075_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You mean the 'Autumn Sunset' song?\nI also believe there's an Autumn\nnursery rhyme too.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404075_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "......\nHey, you're not trying to explain\neverything right now, are you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404075_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I do think it's rather strange but I\nnever think that far about nature's\nmysteries.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404075_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Just looking at the cluttered fallen\nleaves, I think of Autumn as a\nlonely season...");
        Message_MsgSel("Autumn is a season of love...", "So eat a baked sweet potato to be healthy.", "You're rich with sensibility, ｛Hariya＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 2);
                Date_InData_Date(321, 2);
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(4, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0404075_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "But I'm not particularly in love?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404075_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...... I see.\nIf so, it can't be helped...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, are you in love,\n｛Hariya＊＊｝?");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0404075_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "......");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝?");
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404075_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Forget it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder what's wrong with\n｛Hariya＊＊｝...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404075_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nWhy does your mind suddenly jump to\nthat idea...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404075_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Without an artist's sensitivity, you\ncan't make a living.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
