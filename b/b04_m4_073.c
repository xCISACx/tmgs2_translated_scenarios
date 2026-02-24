section "b04_m4_073"{
    int var0 = Date_GetDateOption(2, 19);
    Effect_OpenParticle(0);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404073_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "A fluttering cherry blossom petal...");
        Message_MsgSel("Wow, it's very magical.", "It's sad that it doesn't last long.", "Let's remember to take our garbage with us.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404073_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The cherry blossoms are seriously\nlacking to be called magical.\nThere needs to be more.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404073_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. Not much of a choice.\nThe petals are meant to fall.\nThey fall gracefully and I like\nthat...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404073_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The cleaning looks difficult.\nAs for me, I can't be bothered too\nmuch right now...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404073_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "A lot of groups are viewing the\ncherry blossoms.\nSome brought themselves a karaoke,\namazing!");
        Message_MsgSel("You're better at it, ｛Hariya＊＊｝.", "Everyone's happily enjoying it.", "I want to admire it a little more quietly.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404073_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hehe, well, right.\nToo bad they can't listen to it now.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404073_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Really? It happens to be noisy...\nIt's an off- tune fest.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404073_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Indeed so.\nBut, not much of a choice if you\nfeel that happy.");
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
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404073_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Why do I feel sad once I see a\ncherry blossom petal fall...?");
        Message_MsgSel("Because it's too beautiful.", "Cause soon it's the season of caterpillars.", "It seems you can make a wonderful song.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404073_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah...\nTo be proud until they fall...\nMaybe it's that kind of feeling.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404073_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Woah, you're the worst!\nJust thinking of it is disgusting!!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404073_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Woah, you're the worst!\nJust thinking of it is disgusting!!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah.\n｛Hariya＊＊｝, your back...");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404073_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Huh! What!? What's behind me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "There's a petal▼");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404073_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... You～...\nYou said that on purpose!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm? What?");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0404073_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Laugh while you can! Watch out!\nI'll get even with you for sure.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I'm looking forward to it▼");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(4, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404073_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "A fallen cherry blossom petal themed\nsong could just grab the heart...\nThat's possible.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
