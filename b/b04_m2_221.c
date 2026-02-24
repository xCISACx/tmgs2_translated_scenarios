section "b04_m2_221"{
    int var0 = Date_GetDateOption(2, 66);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0402221_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "They've got quite a few things on\ndisplay...");
        Message_MsgSel("They even have things in the textbook!", "I'm troubled as there are lots of things.", "Studying history is tiring.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402221_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't remember what's in the\ntextbook....\nPass.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402221_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Really?\nThere aren't that many things I\nwanna see, so nothing's troubling\nme.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402221_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nEven if I look at these things, it\ndoesn't rouse my interest at all.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402221_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The meals of that period.\nIt's written here that it's\nmedicinal cooking.");
        Message_MsgSel("You can't eat it!", "I'll make it for you next time!", "Ugh, I probably won't like it...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402221_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Huh? ... Relax, I won't eat it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402221_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "This is a little......\nPlease make me something else.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402221_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Me too.\nIt looks bitter and there's no meat.\nUnbelievable.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402221_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It looks like you can try on a\nnoblewoman's kimono.\nDo you wanna try it on?");
        Message_MsgSel("I want to see you in a kimono.", "I'm scared, it looks like it'll curse me...", "Then please call me 'Young Princess'!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402221_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... How annoying.\nFirst of all, it doesn't say that it\nhas male kimonos here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(2, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402221_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's a replica, right?\nYou're thinking too much about it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402221_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nThat costume isn't a princess', it's\na queen's.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402221_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Princess.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Wah! You s-scared me...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402221_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*sigh*...\nHey, weren't you the one who told me\nto call you that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "But I didn't think that you would\ncontinue on with the charade,\n｛Shiba＊＊｝...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402221_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Haha, what the. But.........");
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("B0402221_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I was a little nervous, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, I also felt a little tickled.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0402221_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Then should I try saying it once\nmore?");
                Message_Who(0);
                Message_MsgDisp("主人公", "N-No, it's fine.\nI'm also nervous, and it's somewhat\nembarrassing...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402221_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Haha... Princess.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Wahhh...\n｛Shiba＊＊｝ is such a\nbully!)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
