section "b04_m7_202"{
    int var0 = Date_GetDateOption(2, 16);
    Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
    Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0407202_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "As expected, there aren't many\npeople.\nIt's very quiet.");
        Message_MsgSel("You got a little sentimental.", "There's a sea urchin in the shade...", "That nice couple looks warm and in love.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407202_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Is that so?\nThen we'll have a pleasant chat.\nIt was in the teacher's room last\ntime......");
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
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0407202_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That it is.\nHowever, the sea urchins here\nwouldn't be that delicious.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407202_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "When feelings rise, adrenaline is\nsecreted which makes the body\ntemperature rise, also.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0407202_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Look back behind us.\nOur footprints are left on the sand.");
        Message_MsgSel("The steps are entirely different.", "Don't they fade when there's a high tide?", "Oh no! We have to hurry and erase them!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407202_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yeah.\nYour footprints are growing\nrestless.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407202_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... You could say that.\nHowever, we can leave our footprints\ntogether.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0407202_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Am I being chased by someone?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0407202_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "The people in Habataki City really\nlike this sea.\nThey grow up looking out into this\nocean.");
        Message_MsgSel("I like it here, too.", "You're also one of us, ｛Wakaouji＊＊｝.", "I haven't grown up...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407202_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I guess?\nIt's a little cold, let's just be\nhere for a little longer.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407202_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yeah, I like the sea, too.\nIs this proof I've become a citizen\nof this town if I think this way?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 5);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0407202_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That's not true.\nYou've grown considerably compared\nto the day of the Entrance Ceremony.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Hmm, is that so?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0407202_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Of course. A person can change.\nYou can change when you have the\ndesire to.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0407202_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "...\nThere was a time when I traveled all\nthe time.\nA trip without a place to return\nto...");
            Voice_PlayVoice("B0407202_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I spoke to no one for many years.\nI forgot how to use my voice until I\ncame to Habataki City.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(7, 0, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0407202_G01500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It's strange, isn't it?\nI am so talkative now, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes...\nI can't imagine\n｛Wakaouji＊＊｝ only speaking\na few words.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0407202_G01600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well, see, an adult like me still\nneeded to grow up.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 5);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0407202_G01700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Therefore, it's all right.\nIn your case, you grew up\nwonderfully.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝, he's an\nadult after all...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
