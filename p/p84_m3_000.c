section "p84_m3_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "I've served two cups of green tea.\nI also added a teacake.");
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("P7403000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Thank you.\nYou're a savior for having such\nskill.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is that so?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P7403000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yeah, you respond perfectly once an\ninstruction has been given.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I've served two cups of black tea.");
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("P7403000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Not black tea, green tea.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, I'm sorry!\nI'll get you your green tea.");
            Character_BlinkStart(3, 3, (#1));
            Voice_PlayVoice("P7403000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Don't forget the teacakes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* Big mistake...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Pamphlet reprints are done!\nI put them in order perfectly.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("P7403000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, well done.\nThere seems to be no chaos with the\ninformation desk.\nI did not know what would happen at\nthat moment.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P7403000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nNo complaints on the outskirts of\nthe school, the visitors were happy,\ntoo....\nThanks to you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm sorry, we're lacking pamphlets!");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(3, 2, (#1));
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("P7403000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "What did you say?\nHow many copies did you bring to the\ninformation desk?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, 50 copies...?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7403000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nWith such a number like that, it is\nbound to be lacking.\nWe need 200 copies.");
            Character_BlinkStart(3, 0, (#1));
            Voice_PlayVoice("P7403000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "By the way, how's the line doing?\nThe people are starting to complain.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah...");
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P7403000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Forget it, I will go.\nYou stay here and take care of the\ncomplaints.");
            Character_Chara_GS2(3, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* Big mistake...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "A guardian came to pick up the lost\nkid.");
            Character_ChFace(0, 0, 6);
            Character_ChFace(0, 4, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("P7403000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Seems that way, a first year student\ninformed me....\nLooks like you made that kid feel\ncomfortable.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P7403000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It's all thanks to you.\nYou've done it without making him\ncry and everyone appreciated it.\nThank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hikami＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "A guardian came to pick up the lost\nkid.");
            Voice_PlayVoice("P7403000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Seems that way....\nAnd it appears you made them angry.\nYou brought the lost child away from\nthe main office.");
            Message_Who(0);
            Message_MsgDisp("主人公", ".........");
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7403000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Anyway, to keep the child from\ncrying, we had to take him to a\nrefreshment booth.\nIt was embarrassing.\nIt couldn't be helped.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* Big mistake...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
